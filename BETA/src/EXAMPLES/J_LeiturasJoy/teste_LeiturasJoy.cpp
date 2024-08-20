#include <Arduino.h>
#include "config.h"

int potBase = 0;
int potBracoA = 0;
int potBracoB = 0;
int potBracoC = 0;
int potBracoD = 0;
bool botaoGarra = false;


void setup(){
    Serial.begin(115200);

    pinMode(Joystick::pin_pot1, INPUT);
    pinMode(Joystick::pin_pot2, INPUT);
    pinMode(Joystick::pin_pot3, INPUT);
    pinMode(Joystick::pin_pot4, INPUT);
    pinMode(Joystick::pin_pot5, INPUT);
    pinMode(Joystick::pin_botaoGarra, INPUT);

    Serial.println("Joystick - Teste Leituras Potenciômetros e Botão");
    delay(1000);
}

void loop(){

    //Operador Ternário
    //Se HIGH (pressionar o botão), o valor das variáveis irá para True. Caso contrário, false.
    botaoGarra = (digitalRead(Joystick::pin_botaoGarra) == HIGH) ? true : false;

    //Leituras Analógicas Potenciômetros - 0 a 4095
    potBase = analogRead(Joystick::pin_pot1);
    potBracoA = analogRead(Joystick::pin_pot2);
    potBracoB = analogRead(Joystick::pin_pot3);
    potBracoC = analogRead(Joystick::pin_pot4);
    potBracoD = analogRead(Joystick::pin_pot5);

    

    //Mostra no Serial os valores CRUS 
    Serial.print("Base: ");
    Serial.println(potBase);

    Serial.print("Braço A: ");
    Serial.println(potBracoA);

    Serial.print("Braço B: ");
    Serial.println(potBracoB);

    Serial.print("Braço C: ");
    Serial.println(potBracoC);

    Serial.print("Braço C: ");
    Serial.println(potBracoD);

    Serial.print("Garra: ");
    Serial.println(botaoGarra);


    //TODO - ADD FUNÇÃO MAP PARA CONVERTER E MOSTRAR OS VALORES DE 0 A 180
    //TODO - ADD IF DEF PARA ALTERNAR FACILMENTE ENTRE OS VALORES CRUS E OS VALORES DOS ANGULOS

    delay(100);
}