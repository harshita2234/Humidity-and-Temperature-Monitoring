# Humidity and Temperature Monitoring System

## Objective:
The objective of this project is to create a humidity and temperature monitoring system using an LPC1768 microcontroller, an LCD display, and a DHT22 sensor. This system will provide real-time data on humidity and temperature, offering users a convenient and reliable way to monitor environmental conditions.

## Scope:
This project focuses on creating a compact and approachable monitoring system. It is ideal for educational purposes, personal projects, or small-scale applications. Users will be able to conveniently monitor temperature and humidity in a controlled environment or a small space. 

## Project Description:
The project involves the development of a hardware and software system that collects, processes, and displays humidity and temperature data. Here's how it works:
1.	Data Collection: The DHT22 sensor is responsible for measuring both temperature and humidity. It will be connected to the LPC1768 microcontroller. The microcontroller sends a signal to the DHT22 sensor to request data, and the sensor responds with the current temperature and humidity readings.
2.	Data Processing: The LPC1768 microcontroller receives the raw sensor data and processes it. The microcontroller will use a simple algorithm to convert the raw sensor data into human-readable values for temperature and humidity.
3.	Display on LCD: The processed temperature and humidity data is then displayed on the LCD display in an easily understandable format. Users will be able to see real-time temperature and humidity readings on the screen. 
4.	Handling both Humidity and Temperature measurements: The code for this project will be written in C using the Keil uVision IDE. It will include functions to handle both humidity and temperature measurements. The DHT22 sensor provides combined data, and the microcontroller will parse the received data to extract temperature and humidity values. The code will then format and display these values on the LCD screen in a clear and user-friendly manner, allowing users to monitor the environmental conditions in real time.

## Hardware Requirements:
1.	ALS-SDA-ARMTCXM3-01 board
2.	DHT22 humidity and temperature sensor
3.	Breadboard and connecting wires
4.	Power supply for the microcontroller

## Software Requirements:
1.	Software: Keil uVision IDE
2.	Language: C









