// Pressure Transducer Voltage Reader
// v1.0
// Written by WhackFather

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Setting up LED output
  Serial.begin(9600);  // Beginning serial interface
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turning LED on to for visual confirmation of functionality
  int sensorValue = analogRead(A0);  // Reading analog pin A0
  Serial.println(sensorValue);  // Printing value to serial monitor
  delay(100);  // Stop, wait a minute
}
