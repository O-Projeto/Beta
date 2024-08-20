#include <Arduino.h>
#include "config.h"

bool objInicio = false;
bool objFim = false;
bool objRed = false;
bool objGreen = false;
bool objBlue = false;


void setup(){
    Serial.begin(115200);

    pinMode(Cenario::sensorInicio, INPUT);
    pinMode(Cenario::sensorFim, INPUT);
    pinMode(Cenario::sensorRed, INPUT);
    pinMode(Cenario::sensorGreen, INPUT);
    pinMode(Cenario::sensorBlue, INPUT);

    Serial.println("Cenario - Teste Sensores");
}

void loop(){

    //Operador Ternário
    //Se LOW (tiver objeto), o valor das variáveis irá para True. Caso contrário, false.
    objInicio = (digitalRead(Cenario::sensorInicio) == LOW) ? true : false;
    objFim = (digitalRead(Cenario::sensorFim) == LOW) ? true : false;
    objRed = (digitalRead(Cenario::sensorRed) == LOW) ? true : false;
    objGreen = (digitalRead(Cenario::sensorGreen) == LOW) ? true : false;
    objBlue = (digitalRead(Cenario::sensorBlue) == LOW) ? true : false;

    Serial.print("Sensor Inicio: ");
    Serial.println(objInicio);

    Serial.print("Sensor Fim: ");
    Serial.println(objFim);

    Serial.print("Sensor Red: ");
    Serial.println(objRed);

    Serial.print("Sensor Green: ");
    Serial.println(objGreen);

    Serial.print("Sensor Blue: ");
    Serial.println(objBlue);

    delay(100);
}