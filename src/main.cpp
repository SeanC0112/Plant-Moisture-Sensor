#include <Arduino.h>
#include "OLED_Driver.h"
#include "GUI_Paint.h"
#include "DEV_Config.h"
#include "Debug.h"
#include "ImageData.h"

#define Sensor1Pin A2
#define Sensor2Pin A3

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
