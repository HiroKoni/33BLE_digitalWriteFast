# 33BLE digitalWriteFast
## About
This library provides a faster `digitalWrite()` function for Arduino Nano 33 BLE boards. This library is still in development. It may contain bugs.

## Usage
Include the hpp file.
```c++
#include "33BLE_digitalWriteFast.hpp"
```

Set the pin mode to `OUTPUT` just as you do with `digitalWrite()`.
```c++
pinMode(PIN_NO, OUTPUT);
```

Use the `digitalWriteFast()` function instead of `digitalWrite()`. For the first argument, you have to use `PinName` defined in `PinNames.h`. `Pin()` function is provided for convenience, which converts pin number (0< pin < 33) to PinName. `Pin()` is a `constexpr` function.
```c++
digitalWriteFast(Pin(i), HIGH);
```

The functions are defined in `nano33BLE_digitalWriteFast` namespace. You might want to use `using namespace` to use the functions without specifying the namespace, although it is not recommended especially in a large project.
```c++
using namespace nano33BLE_digitalWriteFast;
```