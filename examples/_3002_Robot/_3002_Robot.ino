#include "ESPert.h"
#define _ESPERT_ROBOT_

ESPert espert;

void setup() 
{
 	espert.init();
 	espert.oled.init();
 	espert.robot.init();
}

void loop()
{
	espert.robot.front();
 	delay(2000);
 	espert.robot.left();
 	delay(2000);
 	espert.robot.right();
 	delay(2000);
 	espert.robot.back();
 	delay(2000);
 	espert.robot.stop();
 	delay(2000);
}
