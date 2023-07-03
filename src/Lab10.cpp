/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Akash/IoTCamp2023/Lab10/src/Lab10.ino"
void setup();
void loop();
#line 1 "c:/Users/Akash/IoTCamp2023/Lab10/src/Lab10.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(9600);
  Serial1.begin(9600);
  while (!Serial.isConnected()) {}
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  if (Serial.available()) {
    char value = Serial.read();
      Serial1.print(value);
  }
  if (Serial1.available()) {
    char s1Value = Serial1.read();
    Serial.print(s1Value);
  }
}