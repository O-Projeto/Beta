#include <Arduino.h>
#include "config.h"

bool objInicio = false;
bool objFim = false;
bool objRed = false;
bool objGreen = false;
bool objBlue = false;


void setup(){
    Serial.begin(115200);

    pinMode(Cenario::pin_sensorInicio, INPUT);
    pinMode(Cenario::pin_sensorFim, INPUT);
    pinMode(Cenario::pin_sensorRed, INPUT);
    pinMode(Cenario::pin_sensorGreen, INPUT);
    pinMode(Cenario::pin_sensorBlue, INPUT);

    Serial.println("Cenario - Teste Sensores");
    delay(1000);

}

void loop(){

    //Operador Ternário
    //Se LOW (tiver objeto), o valor das variáveis irá para True. Caso contrário, false.
    objInicio = (digitalRead(Cenario::pin_sensorInicio) == LOW) ? true : false;
    objFim = (digitalRead(Cenario::pin_sensorFim) == LOW) ? true : false;
    objRed = (digitalRead(Cenario::pin_sensorRed) == LOW) ? true : false;
    objGreen = (digitalRead(Cenario::pin_sensorGreen) == LOW) ? true : false;
    objBlue = (digitalRead(Cenario::pin_sensorBlue) == LOW) ? true : false;

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