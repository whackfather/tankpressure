// Pressure Transducer Voltage Reader
// v2.0
// Written by Roman Rodriguez

#include <string.h>
#include <SPI.h>
#include <SD.h>

File myFile;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Setting up LED output
  Serial.begin(9600);  // Beginning serial interface
  SD.begin();  // SD Card
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turning LED on to for visual confirmation of functionality
  float cFact = 0.97751710654;  // Defining conversion factor
  float sensorValue = analogRead(A1);  // Reading analog pin A0
  float pressure = sensorValue * cFact;  // Converting from weird input to PSI
  Serial.println(pressure);  // Printing pressure to serial monitor
  myFile = SD.open("test.txt", FILE_WRITE);  // Opening SD card for reading
  myFile.println(pressure);  // Writing pressure to SD card
  myFile.close();  // Closing SD card
  delay(10);  // Stop, wait a minute
}
