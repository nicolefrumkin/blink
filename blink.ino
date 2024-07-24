void setup() {
  DDRB |= (1 << DDB5); // Set PB5 as output
}

void loop() {
  PORTB |= (1 << PB5); // Set PB5 HIGH
  delay(1000);         // Wait for 1 second
  PORTB &= ~(1 << PB5); // Set PB5 LOW
  delay(1000);         // Wait for 1 second
}
