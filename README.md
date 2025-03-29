# partical-flower
Partical flower is an interactive system for controlling TouchDesigner's real-time visuals with Arduino sensor data.  
The Arduino reads the data from the photoresistor and sends it to TouchDesigner through the serial port and TouchDesigner parses the data and maps it to the visual parameters.

# hardware requirement
Arduino  
Board: ESP32-C3 (It takes a long time to download the board of ESP32C3, so I would recommend Arduino Uno.)  
Component: LDR, 1kΩ Resistor  
Circuit diagram:  
![image](https://github.com/ddyt0113/partical-flower/blob/main/particalflower-Lu%20Manman24063315g/arduino%20coding/circuit%20connection.png)
![image](https://github.com/ddyt0113/partical-flower/blob/main/particalflower-Lu%20Manman24063315g/arduino%20coding/circuit.jpg)

# Installation and Configuration
## Arduino Setup
1. Select board type, connect Arduino port (e.g. COM3)
2. Upload code to Arduino.
3. Configure the serial port baud rate (e.g. 115200).
4. Close the serial monitor when it outputs data.

## TouchDesigner Settings
1. Import project file (.toe or .tox).
2. Configure serial communication (Serial DAT parameter).

## Instructions
When we block the light source of the device, we can see the ever-changing image of the partical flower changing brightness with the brightness of the light.  
[![IMAGE ALT TEXT HERE](https://img.youtube.com/vi/62IV6MDD6aY/0.jpg)](https://www.youtube.com/watch?v=62IV6MDD6aY)

# Reference
TD particle effect: https://youtu.be/hZRZqBKLoUg?si=_9qCw6D04CJJwu31
Arduino to TouchDesigner: https://youtu.be/4dO7Q5oQbRg?si=wKDoHr3bzZdHKXm2
