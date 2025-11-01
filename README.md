# Misc-Helper-and-Troubleshooting-Scripts

Arduino, PowerShell, Python, etc... miscellaneous scripts to assist with testing and troubleshooting.

A bunch of stuff here that may be helpful for troubleshooting.
As always...

## ⚠️ Disclaimer
> **Use any of this code at your own risk.** While designed for safe testing, incorrect usage or testing may damage hardware, mark your firstborn a crow familiar, or you may even lose a leg. Always ensure you understand your wiring and component limits. If you break hardware/yourself, the author is not liable, or sometimes wrong.



## 📋 Code Repository by Platform

  ### &nbsp;&nbsp;📟 Arduino IDE
  
  - **⚡ ESP32 GPIO Test - Voltage Check**
    
    **What is it for?:**&nbsp;&nbsp;&nbsp;&nbsp;Manually test the functionality of individual GPIO pins on your ESP32. It allows you to toggle a selected GPIO pin between HIGH (~3.3V DC) and LOW (~0V DC) states
    via the serial monitor, confirming its output capability and helping to diagnose wiring issues.
    
    **Code:**&nbsp;&nbsp;&nbsp;&nbsp;[ESP32_GPIO_Test.ino](https://github.com/DisasterofPuppets/Misc-Helper-and-Troubleshooting-Scripts/blob/main/ESP32_GPIO_Test.ino)  
    
    **Usage:**&nbsp;&nbsp;&nbsp;Enter the pin number in serial monitor and the program will set it to High.
    
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Measure between ground and selected pin to confirm 3.3v measurement - if not, pin may be faulty.
    
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Additional instructions included in code comments.


  - **⚡ ESP32 Microwave Sensor Test**
  
     **What is it for?:**&nbsp;&nbsp;&nbsp;&nbsp;outputs the state of a Microwave Sensor to Serial. EMSea / RCWL-0516
    
    **Code:**&nbsp;&nbsp;&nbsp;&nbsp;[ESP32_Microwave_Sensor_Trigger_Test.ino](https://github.com/DisasterofPuppets/Misc-Helper-and-Troubleshooting-Scripts/blob/main/ESP32_Microwave_Sensor_Trigger_Test.ino)  
    
    **Usage:**&nbsp;&nbsp;&nbsp; Upload and watch the Serial as it returns the state of the sensor.

    **Wiring Diagram:**&nbsp;&nbsp;&nbsp; [Here](https://github.com/DisasterofPuppets/Misc-Helper-and-Troubleshooting-Scripts/blob/main/ESP32_Microwave_Sensor_Trigger_Test_WIRING.png)
    

  - **🎤 Home Assistant - ESP32 Speaker and Microphone Test**
    
    **What is it for?:**&nbsp;&nbsp;&nbsp;&nbsp;Tests the input from an INMP441 Microphone and Speaker Output from a MAX98357A I2S 3W Class D Amplifier
    
    **Code:**&nbsp;&nbsp;&nbsp;&nbsp;[HomeAssistant_ESP32_Satellite_Soundcheck.ino](https://github.com/DisasterofPuppets/Misc-Helper-and-Troubleshooting-Scripts/blob/main/HomeAssistant_ESP32_Satelite_Soundcheck.ino)
    
    **Usage:**&nbsp;&nbsp;&nbsp;You will be prompted to select either the microphone or speaker check by entering a number in the serial.
    
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The Speaker check will ask for a tone (440 is good) and play it for 5 seconds to confirm the speaker is working
    
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;The Microphone check will blink the onboard LED to the volume of your voice to confirm audio input is working.
   
   
   
