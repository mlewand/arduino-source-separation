
#include "./src/Dummy/Dummy.h"

Dummy* instance = nullptr;

void setup() {
	Serial.begin( 115200 );
	instance = new Dummy();
}

void loop() {
  instance->print();
  delay( 1500 );
}
