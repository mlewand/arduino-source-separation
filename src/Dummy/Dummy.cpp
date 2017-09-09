
#include "./Dummy.h"
#include "Arduino.h"

Dummy::Dummy() {}

void Dummy::print() {
	Serial.println( "Dummy::print" );
}