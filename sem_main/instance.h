/*
 * instance.h
 *
 * Created: 20/01/2018 4:32:43 PM
 *  Author: teddy
 */ 

#pragma once

#include "buzzer.h"
#include "lcd.h"
#include "leds.h"
#include "spimanager.h"
#include "twimanager.h"
#include "gpioinput.h"

namespace runtime {
	void init();
	extern Buzzer			*buzzer;
	extern Buzzer			*vbBuzzer;
	extern BuzzerManager	*buzzermanager;
	extern BuzzerManager	*vbBuzzermanager;
	extern ViewerBoard		*viewerboard;
	extern SPIManager		*mainspi;
	extern TWIManager       *maintwi;
	extern LED				*greenLED;
	extern LED				*redLED;
	extern LED				*vbLED;
	extern LEDManager		*greenLEDmanager;
	extern LEDManager		*redLEDmanager;
	extern LEDManager		*vbLEDmanager;
	extern GPIOPin			*opPresence;
}
