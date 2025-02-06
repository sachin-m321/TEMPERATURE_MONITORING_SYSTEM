#include<LiquidCrystal.h>

// Initialize the LCD
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);

// Pin configurations
int sensorPin = A0;   // Temperature sensor connected to A0
int buttonPin = 2;    // Push button connected to pin 2
int ledPin = 10;      // LED connected to pin 10

void setup() {
  // Initialize serial communication and LCD
  Serial.begin(9600);
  lcd.begin(16, 2);

  // Set buttonPin as input and ledPin as output
  pinMode(buttonPin, INPUT_PULLUP); // Using internal pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set LED as output
}

void loop() {
  // Read button state (LOW when pressed)
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) { // Button is pressed
    int reading = analogRead(sensorPin);

    // Measure the voltage and calculate temperature
    float voltage = reading * 4.68 / 1024.0;
    float temperatureC = (voltage - 0.5) * 100;

    // Print temperature to Serial Monitor
    Serial.print(temperatureC);
    Serial.println(" degrees C");

    // Display temperature on LCD
    lcd.setCursor(0, 0);
    lcd.print("Temperature Value ");
    lcd.setCursor(0, 1);
    lcd.print(temperatureC);
    lcd.print(" degrees C");

    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else { // Button is not pressed
    // Clear the LCD and turn off the LED
    lcd.clear();
    digitalWrite(ledPin, LOW);
  }

  delay(100); // Delay for stability
}