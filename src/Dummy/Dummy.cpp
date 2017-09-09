
#include "./Dummy.h"
#include "Arduino.h"

Dummy::Dummy() {
	Serial.println( "Constructor!" );
}

void Dummy::print() {
	Serial.println( "Dummy::print" );
}