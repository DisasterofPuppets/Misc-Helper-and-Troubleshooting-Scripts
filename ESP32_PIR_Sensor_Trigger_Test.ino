/*
This script outputs the state of a PIR Sensor to Serial.
It is designed for an ESP32 Board with an HC-SR312 (AM312) PIR sensor.

NOTE: The HC-SR312 is a digital sensor and stabilizes almost instantly
after power-on. A long calibration delay is not required.

* DISCLAIMER : THIS CODE IS FREE TO BE SHARED FOR PERSONAL USE.
* I ACCEPT NO LIABILITY FOR ANY DAMAGE DIRECT OR INDIRECTLY CAUSED BY USING THIS CODE.
* IF YOU DO DUMB, YOU GET DUMB, SOMETIMES I'M DUMB

-----------------------  2025 http://DisasterOfPuppets.com ------------------------

YOU NEED TO PHYSICALLY DISCONNECT AND RECONNECT THE ESP AFTER UPLOADING TO ALLOW THE PIR CONFIG TO RUN.
THIS IS DEFAULT BEHAVIOUR OF THE BOARD WHEN IT IS CONNECTED TO POWER

================ Wiring ================
|                        |             |  
|    PIR Sensor Pin      |  ESP32 Pin  |
|       Ground      ---> |     GND     |
|        VCC        ---> |     VIN     |
|       Output      ---> |    GPI04    |
|                        |             |  
========================================

Start of Actual Code
====================*/

// Define the GPIO pin connected to the PIR sensor's OUT pin
const int PIR_OUT_PIN = 4; // Using GPIO4 

void setup() {

  Serial.begin(115220);
  Serial.println("\n\nPIR Motion Sensor Test (HC-SR312)");
  Serial.println("---------------------------------");

  // Configure the GPIO pin as an input
  pinMode(PIR_OUT_PIN, INPUT);

  Serial.print("Monitoring GPIO: ");
  Serial.println(PIR_OUT_PIN);
  
  // Give the sensor a brief moment to stabilize after power-on.
  // 2 seconds is more than enough for the HC-SR312.
  delay(2000); 
  
  Serial.println("Sensor ready!");
}

void loop() {
  // Read the current state of the PIR sensor's output pin
  int sensorState = digitalRead(PIR_OUT_PIN);

  // PIR sensors output HIGH when motion is detected
  // and LOW when no motion is present.

  if (sensorState == HIGH) {
    Serial.println("MOTION DETECTED (HIGH)");
  } else {
    Serial.println("NO MOTION (LOW)");
  }

  // A small delay to prevent the serial monitor from flooding.
  delay(100);
}
