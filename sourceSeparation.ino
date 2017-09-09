
#include "./src/Dummy/Dummy.h"

Dummy dummyInstance = Dummy();

void setup() {
	Serial.begin( 115200 );
}

void loop() {
	dummyInstance.print();
	delay( 1500 );
}
