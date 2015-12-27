#include "ESPert.h"

ESPert espert;

void setup() 
{
 	espert.init();
 	espert.oled.init();
 	espert.robot.init();
}

void loop()
{
	espert.robot.Front();
 	delay(2000);
 	espert.robot.Left();
 	delay(2000);
 	espert.robot.Right();
 	delay(2000);
 	espert.robot.Back();
 	delay(2000);
 	espert.robot.Stop();
 	delay(2000);
}
