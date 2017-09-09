
#include "Arduino.h"
#include "./Dummy.h"

Dummy::Dummy() {
	Serial.println( "Constructor!" );
}

void Dummy::print() {
	Serial.println( "Dummy::print" );
}