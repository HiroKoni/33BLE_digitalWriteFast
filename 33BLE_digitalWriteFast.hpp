#include <Arduino.h>

namespace nano33BLE_digitalWriteFast
{
  PinName Pin(uint8_t pin){
    return digitalPinToPinName(pin);
  }
    inline void digitalWriteFast(PinName pinName, PinStatus val)
    {
        if (val)
        {
            nrf_gpio_pin_set(pinName);
        }
        else
        {
            nrf_gpio_pin_clear(pinName);
        }
    }
}