#include "33BLE_digitalWriteFast.hpp"
using namespace nano33BLE_digitalWriteFast;

void setup()
{
    pinMode(D2, OUTPUT);
}

void loop()
{
    Serial.print("digitalWriteFast():");
    unsigned long start_nrf = micros();
    for (int i = 0; i <= 1000; i++)
    {
        digitalWriteFast(Pin(2), HIGH);
        digitalWriteFast(Pin(2), LOW);
    }
    unsigned long end_nrf = micros();
    unsigned long time = end_nrf - start_nrf;
    Serial.println(time);
}