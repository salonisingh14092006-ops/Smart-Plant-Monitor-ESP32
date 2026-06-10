# Smart-Plant-Monitor-ESP32
Smart Plant Monitor using ESP32
Objective

To monitor soil moisture levels using an ESP32 and generate alerts when the plant requires watering.

Components Used
ESP32 Development Board
Soil Moisture Sensor
Buzzer
Jumper Wires
Circuit Connections
Component	ESP32 Pin
Soil Moisture Sensor AO	GPIO 34
Soil Moisture Sensor VCC	3.3V
Soil Moisture Sensor GND	GND
Buzzer (+)	GPIO 25
Buzzer (-)	GND
Working

The soil moisture sensor measures the water content in the soil. The ESP32 reads the sensor value and converts it into a moisture percentage. If the moisture level falls below 30%, the buzzer is activated to alert the user that the plant needs watering.

Features
Real-time soil moisture monitoring
Automatic low-moisture alert
ESP32-based IoT project
Simple and cost-effective design
Result

The Smart Plant Monitor successfully monitors soil moisture and alerts the user when watering is required.
