// Pressure Transducer Voltage Reader
// v1.0
// Written by Roman Rodriguez

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Setting up LED output
  Serial.begin(9600);  // Beginning serial interface
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turning LED on to for visual confirmation of functionality
  float cFact = 0.97751710654;  // Defining conversion factor
  float sensorValue = analogRead(A0);  // Reading analog pin A0
  float pressure = sensorValue * cFact;  // Converting from weird input to PSI
  Serial.println(pressure);  // Printing pressure to serial monitor
  delay(100);  // Stop, wait a minute
}
