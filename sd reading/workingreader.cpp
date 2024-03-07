// Pressure Transducer Voltage Reader
// v1.0

#include <string.h>
#include <SPI.h>
#include <SD.h>

File myFile;

void setup() {
  Serial.begin(9600);
  SD.begin();
  File myFile = SD.open("test.txt", FILE_READ);
  while (myFile.available()) {
    Serial.write(myFile.read());
  }
}

void loop() {
  
}
