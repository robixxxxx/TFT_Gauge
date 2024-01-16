#include <Arduino.h>
#include "Gauge.h"

TFT_eSPI tft = TFT_eSPI();
TFT_eSprite sprite = TFT_eSprite(&tft);
Gauge gauge = Gauge(&sprite, &tft, "km/h");
int value = 0;
void setup(){
}

void loop(){
    gauge.setValue(value);
    gauge.update();
    value++;
    if(value>260)
        value = 0;
}