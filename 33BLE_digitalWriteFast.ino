#include "33BLE_digitalWriteFast.hpp"
using namespace nano33BLE_digitalWriteFast;

void setup()
{
    pinMode(A2, OUTPUT);
}

void loop()
{
    Serial.print("digitalWriteFast():");
    unsigned long start_nrf = micros();
    for (int i = 0; i <= 1000; i++)
    {
        digitalWriteFast(A(7), HIGH);
        digitalWriteFast(A(7), LOW);
    }
    unsigned long end_nrf = micros();
    unsigned long time = end_nrf - start_nrf;
    Serial.println(time);
}