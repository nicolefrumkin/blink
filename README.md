# Arduino LED Blink Example

This repository contains a simple Arduino sketch that blinks an LED connected to pin PB5 every second.

## Code Description

The code performs the following actions:
- **Setup:** Configures pin PB5 as an output.
- **Loop:** Alternates the state of pin PB5 between HIGH and LOW every second, causing an LED to blink on and off.

## How to Use

1. **Connect an LED:** Attach an LED to pin PB5 (digital pin 13 on some Arduino boards) with an appropriate resistor in series to limit current.
2. **Upload the Code:** Open the Arduino IDE, paste the code into a new sketch, and upload it to your Arduino board.
3. **Observe the LED:** The LED should blink on and off every second.

## Code

```cpp
void setup() {
  DDRB |= (1 << DDB5); // Set PB5 as output
}

void loop() {
  PORTB |= (1 << PB5); // Set PB5 HIGH
  delay(1000);         // Wait for 1 second
  PORTB &= ~(1 << PB5); // Set PB5 LOW
  delay(1000);         // Wait for 1 second
}
```

## Requirements

- Arduino board (e.g., Arduino Uno, Arduino Nano)
- LED
- 220Ω resistor
- Arduino IDE
