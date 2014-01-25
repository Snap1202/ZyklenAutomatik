/* 
	Editor: http://www.visualmicro.com
	        arduino debugger, visual micro +, free forum and wiki
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

//
//
void doPotiB();
void doEncoderA();
void doEncoderB();

#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Users\Malte\Documents\GitHub\ZyklenAutomatik\Bresenham_Shield_muck\Bresenham_Shield_muck.ino"
#include "C:\Users\Malte\Documents\GitHub\ZyklenAutomatik\Bresenham_Shield_muck\ZyklenAutomatik_Config.h"