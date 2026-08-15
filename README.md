Push-Button Controlled LED

## What it does
An LED that toggles ON and OFF each time a push button is pressed — no auto-blinking,
just clean digital input handling. Press once, LED turns on. Press again, it turns off.

## Components
- Arduino Uno
- LED + 220Ω resistor
- Push button
- Simulated on [Wokwi](https://wokwi.com)

## What I learned
- `digitalRead()` for reading digital input
- `INPUT_PULLUP` — using the internal pull-up resistor instead of extra wiring
- State toggling logic (tracking ON/OFF instead of just repeating an action)
- Basic debounce — handling the tiny electrical "flicker" a real button press causes

## Run it yourself
1. Open this project in [Wokwi](https://wokwi.com) or clone this repo
2. Build with PlatformIO (`pio run`)
3. Start the Wokwi simulator and click the push button to toggle the LED

