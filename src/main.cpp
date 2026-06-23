#include <Arduino.h>

#define Sensor1Pin A2
#define Sensor2Pin A3

// Pins for screen
#define DIN 11
#define CLK 13
#define CS 5
#define DC 6
#define RST 7

void setup()
{
  // put your setup code here, to run once:
  pinMode(Sensor1Pin, INPUT);
  pinMode(Sensor2Pin, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
