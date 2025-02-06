# TEMPERATURE_MONITORING_SYSTEM
COMPANY : CODETECH IT SOLUTIONS

NAME : SACHIN M

INTERN ID : CT08LTG

DOMAIN : EMBEDDED SYSTEMS

DURATION : 4 WEEKS

MENTORS : NEELA SANTOSH KUMAR

Description :

This program is designed for an Arduino or compatible board to display the current temperature on a 20x4 LCD screen using the I2C interface. The program reads temperature data from a thermistor connected to analog pin A0 and displays the temperature in Celsius on the LCD. In the setup() function, the LCD is initialized, and the backlight is turned on. Initially, the screen displays the text "Hello World" as a greeting. The loop() function then continuously reads the temperature every second, clears the screen, and updates it with the current temperature value by calling the readTemp() function. The readTemp() function calculates the temperature using the Steinhart-Hart equation, which is commonly used to convert the resistance of a thermistor to a temperature in Celsius. The constant BETA is used for the thermistor's specific characteristics, and the analog value from pin A0 is read to compute the temperature. This value is then converted to Celsius and returned for display. This project demonstrates how to use a thermistor with an Arduino, apply temperature conversion equations, and display the results on an LCD, making it a useful tool for basic temperature sensing and monitoring applications.

OUTPUT:
