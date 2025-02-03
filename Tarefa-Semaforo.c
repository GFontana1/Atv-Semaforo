#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

// Definição dos pinos dos LEDs
#define LED_VERMELHO 11 
#define LED_AMARELO 12
#define LED_VERDE 13

void config_pin(){
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    gpio_put(LED_VERMELHO, 1);
}

// Estados do semáforo
typedef enum {
    VERMELHO,
    AMARELO,
    VERDE
} estado_t;

estado_t estado_atual = VERMELHO; // Inicia no vermelho

// Callback do temporizador
bool repetir_timer_callback(struct repeating_timer *t) {
    // Desliga todos os LEDs antes de mudar o estado
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Alterna entre os estados do semáforo
    switch (estado_atual) {
        case VERMELHO:
            gpio_put(LED_AMARELO, 1);
            estado_atual = AMARELO;
            break;
        case AMARELO:
            gpio_put(LED_VERDE, 1);
            estado_atual = VERDE;
            break;
        case VERDE:
            gpio_put(LED_VERMELHO, 1);
            estado_atual = VERMELHO;
            break;
    }

    return true; // Mantém o timer repetindo
}

int main() {
    stdio_init_all();
    config_pin();

    // Configuração do temporizador para alternar a cada 3 segundos
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repetir_timer_callback, NULL, &timer);

    // Loop principal com mensagens a cada 1 segundo
    while (1) {
        if(estado_atual == VERMELHO){
            printf("Semáforo Vermelho!\n");
        
        }else if(estado_atual == AMARELO){
            printf("Semáforo Amarelo!\n");

        }else{
            printf("Semáforo Verde!\n");
        }
        sleep_ms(1000);
    }

    return 0;
}
