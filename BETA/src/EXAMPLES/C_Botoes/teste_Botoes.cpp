#include <Arduino.h>
#include "config.h"

bool botaoAmarelo = false;
bool botaoAzul = false;
bool botaoVerde = false;
bool botaoVermelho = false;


void setup(){
    Serial.begin(115200);

    pinMode(Cenario::pin_botaoAmarelo, INPUT);
    pinMode(Cenario::pin_botaoAzul, INPUT);
    pinMode(Cenario::pin_botaoVerde, INPUT);
    pinMode(Cenario::pin_botaoVermelho, INPUT);

    Serial.println("Cenario - Teste Botoes");
    delay(1000);
}

void loop(){

    //Operador Ternário
    //Se HIGH (pressionar o botão), o valor das variáveis irá para True. Caso contrário, false.
    botaoAmarelo = (digitalRead(Cenario::pin_botaoAmarelo) == HIGH) ? true : false;
    botaoAzul = (digitalRead(Cenario::pin_botaoAzul) == HIGH) ? true : false;
    botaoVerde = (digitalRead(Cenario::pin_botaoVerde) == HIGH) ? true : false;
    botaoVermelho = (digitalRead(Cenario::pin_botaoVermelho) == HIGH) ? true : false;


    Serial.print("Botão Amarelo: ");
    Serial.println(botaoAmarelo);

    Serial.print("Botão Azul: ");
    Serial.println(botaoAzul);

    Serial.print("Botão Verde: ");
    Serial.println(botaoVerde);

    Serial.print("Botão Vermelho: ");
    Serial.println(botaoVermelho);


    delay(100);
}