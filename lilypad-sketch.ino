
/*
Based on the LilyPad Temperature Sensor Example Code by SparkFun Electronics

Temperature sensor connections:
  * S tab to A3
  * + tab to 5 (usually + or A5, but it sewed it to pin 5 by accident)
  * - tab to -

Tri-Color LED connections:
  * R pin to 11
  * B pin to 10
  * G pin to 9
  * + pin to +

https://learn.sparkfun.com/tutorials/lilypad-temperature-sensor-hookup-guide

This code is released under the MIT License (http://opensource.org/licenses/MIT)
******************************************************************************/

 int sensorPin = A3;
 int RGB_red = 11;
 int RGB_blue = 10;
 int RGB_green = 9;

 // Set temperature threshold variables to check against.
 int threshold_green =  0; // 0 degrees Celsius, LED will turn green
 int threshold_orange = 10; // 10 degrees Celsius, LED will turn orange
 int threshold_red =  20; // 20 degrees Celsius, LED will turn red

 // Length of time, LEDs will be turned on
 int wait = 5000;

void setup()
{
  // Set the temperature sensor pin as an INPUT:
  pinMode(sensorPin, INPUT);

  // Set RGB pins as OUTPUT:
  pinMode(RGB_red, OUTPUT);
  pinMode(RGB_green, OUTPUT);
  pinMode(RGB_blue, OUTPUT);

  //Set 5 as output
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);

  // Initialize Serial for debugging, set the baud rate to 9600 bps.
  Serial.begin(9600);
}

void loop()
{
  long rawTemp;
  float voltage;
  float celsius;

  // Read the raw 0-1023 value of temperature into a variable.
  rawTemp = analogRead(sensorPin);

  // Calculate the voltage, based on that value.
  // Multiply by maximum voltage (3.3V) and divide by maximum ADC value (1023).
  voltage = rawTemp * (3.3 / 1023.0);

  // Calculate the celsius temperature, based on that voltage.
  celsius = (voltage - 0.5) * 100;
  
  // Print voltage reading and temp celsius to serial monitor for debugging
  Serial.print("Voltage: ");
  Serial.println(voltage);
  Serial.print("Celsius: ");
  Serial.println(celsius);    

  // Check the temperature and colour the LED according to the temperature threshold
  if (celsius >= threshold_red) {
    analogWrite(RGB_blue, 255);
    analogWrite(RGB_green, 255);
    analogWrite(RGB_red, 0); // Turn the LED red
    Serial.println("RED RED RED");
    delay(wait);
  }
  else if (celsius >= threshold_orange) {
    analogWrite(RGB_blue, 255);
    analogWrite(RGB_green, 128);
    analogWrite(RGB_red, 0); // Turn the LED orange
    Serial.println("Orange Alert");
    delay(wait);
  }
  else if (celsius >= threshold_green) 
  {
    analogWrite(RGB_blue, 255);
    analogWrite(RGB_green, 0); // Turn the LED green
    analogWrite(RGB_red, 255);
    Serial.println("Everything green");
    delay(wait);
  }
  else {
    analogWrite(RGB_blue, 0); // Turn the LED blue
    analogWrite(RGB_green, 255);
    analogWrite(RGB_red, 255);
    Serial.println("Chilling in blue");
    delay(wait);    
  }
  Serial.println();
}
