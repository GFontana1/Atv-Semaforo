# Atividade 1 - Tarefa dia 29/01 Embarcatech

## Descrição do Projeto

O programa simula um semáforo ao utilizar 3 LEDs:

- 1 *Vermelha*
- 1 *Amarela*
- 1 *Verde*

Ao rodar o código, é iniciado um loop em que cada LED fica, individualmente, acesa por 3 segundos, começando pela vermelha, seguida da amarela e por fim a verde. Após a verde se apagar, a LED vermelha é acesa novamente e o loop recomeça até o usuário encerrar o programa.

A cada segundo, é impressa uma mensagem no terminal, indicando qual LED está acesa no momento.

## Requisitos

- Placa *Raspberry Pi Pico W*
- LEDs e resistores conectados aos pinos:
  - *Vermelho*: GPIO 11 (Verde na placa)
  - *Amarelo*: GPIO 12 (Azul)
  - *Verde*: GPIO 13 (Vermelho)
- Cabo USB para alimentação e comunicação serial
- Ambiente de desenvolvimento configurado com *SDK do Raspberry Pi Pico W*

## Como rodar o código

1. *Compilar o código*:
   - Tenha o SDK do Raspberry Pi Pico W configurado.
   - Compile o código utilizando CMake e GCC ARM.

2. *Transferir para o Raspberry Pi Pico W*:
   - Conecte sua placa ao computador com ela no modo **Bootsel**.
   - Monte a unidade **RPI-RP2** no computador.
   - Copie o arquivo compilado `.uf2` para a unidade montada ou aperte em Run na interface do VS Code caso tenha configurado a placa com o Zadig.