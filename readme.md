# 33BLE digitalWriteFast
## About
This library provides a faster digitalWrite() function for Arduino Nano 33 BLE boards. This library is still in development. It may contain bugs.

## Usage
Include the hpp file.
```c++
#include <33BLE_digitalWriteFast.hpp>
```

Set the pin mode to OUTPUT as usual.
```c++
pinMode(PIN_NO, OUTPUT);
```

Use the digitalWriteFast() function instead of digitalWrite(). For the first argument, you have to use PinName defined in PinNames.h. D() and A() functions are provided for convenience.
```c++
digitalWriteFast(D(13), HIGH); // If you want to set pin D13 to HIGH
digitalWriteFast(A(0), LOW); // If you want to set pin A0 to LOW
```

The functions are defined in 'nano33BLE_digitalWriteFast' namespace. You might want to use 'using namespace' to use the functions without the namespace.
```c++
using namespace nano33BLE_digitalWriteFast;
```