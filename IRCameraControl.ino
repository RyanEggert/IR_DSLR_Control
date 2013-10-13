
#include "multiCameraIrControl.h"
// IRCameraControl.ino

Sony A580(7);

void setup() 
{
	Serial.begin(9600);
}

void loop() 
{
	A580.shutterNow();
	Serial.println("Image Taken");
	delay(10000);
}

