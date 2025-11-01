/*
This shoddily put together script outputs the state of a Microwave Sensor to Serial.
This type of sensor is usually used to detect motion between up to 3-5m
It is designed for an ESP32 Board with an RCWL-0516 (Microwave sensor) Also known as EMSea 3.3V

* DISCLAIMER : THIS CODE IS FREE TO BE SHARED FOR PERSONAL USE.
* I ACCEPT NO LIABILITY FOR ANY DAMAGE DIRECT OR INDIRECTLY CAUSED BY USING THIS CODE.
* IF YOU DO DUMB, YOU GET DUMB, SOMETIMES I'M DUMB

-----------------------  2025 http://DisasterOfPuppets.com ------------------------


================ Wiring ================
|                        |             |  
|  Microwave Sensor Pin  |  ESP32 Pin  |
|       Ground      ---> |     GND     |
|        VIN        ---> |     VIN     |
|       Output      ---> |    GPI04    |
|                        |             |  
========================================

Start of Actual Code
====================*/

// Define the GPIO pin connected to the RCWL-0516's OUT pin
const int RADAR_OUT_PIN = 4; // Using GPIO4 

void setup() {
  // Initialize Serial communication at a common baud rate
  // This will send debugging information to your Serial Monitor in Arduino IDE
  Serial.begin(115200);
  Serial.println("RCWL-0516 Radar Sensor Test");
  Serial.println("---------------------------");

  // Configure the GPIO pin as an input with an internal pull-up resistor.
  // This is crucial for the RCWL-0516's OUT pin behavior.
  pinMode(RADAR_OUT_PIN, INPUT_PULLUP);

  Serial.print("Monitoring GPIO: ");
  Serial.println(RADAR_OUT_PIN);
}

void loop() {
  // Read the current state of the radar sensor's output pin
  int sensorState = digitalRead(RADAR_OUT_PIN);

  // The RCWL-0516 typically outputs HIGH (3.3V) when motion is detected
  // and LOW (0V) when no motion is present.
  // With INPUT_PULLUP, when the sensor pulls LOW, it becomes 'active'.
  // The below confirms these motion values based on whether the pin is HIGH or LOW.

  if (sensorState == HIGH) {
    Serial.println("MOTION DETECTED (HIGH)");
  } else {
    Serial.println("NO MOTION (LOW)");
  }

  //delay to stop serial spam, increase if you feel it is required
  delay(100);
}
