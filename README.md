# Atividade 1 - Semáforo - Tarefa dia 29/01 Embarcatech

## Descrição do Projeto

O programa simula um semáforo ao utilizar 3 LEDs:

- 1 *Vermelha*
- 1 *Amarela*
- 1 *Verde*

Ao rodar o código, é iniciado um loop em que cada LED fica, individualmente, acesa por 3 segundos, começando pela vermelha, seguida da amarela e por fim a verde. Após a verde se apagar, a LED vermelha é acesa novamente e o loop recomeça até o usuário encerrar o programa.

A cada segundo, é impressa uma mensagem no terminal, indicando qual LED está acesa no momento.

## Como rodar o código

1. *Compilar o código*:
   - Tenha o SDK do Raspberry Pi Pico W configurado.
   - Compile o código utilizando CMake e GCC ARM.
   - Abra o diagram.json para ver o simulador do Wokwi

2. *Transferir para o Raspberry Pi Pico W*:
   - Conecte sua placa ao computador com ela no modo **Bootsel**.
   - Monte a unidade **RPI-RP2** no computador.
   - Copie o arquivo compilado `.uf2` para a unidade montada ou aperte em Run na interface do VS Code caso tenha configurado a placa com o Zadig.
