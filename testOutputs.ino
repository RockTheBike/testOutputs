#define BAUD_RATE 57600
#define NUM_LEDS 12 // Number of LED outputs (includes (halogen) energy sinks)
const int ledPins[NUM_LEDS] = {  3,4,5,6,7, 8,  9,10,11,12,A5, 13  };

void setup() {
  Serial.begin(BAUD_RATE);

  Serial.println("test all outputs");

  pinMode(2, OUTPUT);

  // init LED pins
  for(int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i],OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(ledPins[i],HIGH);
    Serial.print(ledPins[i]);
    delay(1000);
    Serial.print(", ");
    digitalWrite(ledPins[i],LOW);
  }
  Serial.println();
}
