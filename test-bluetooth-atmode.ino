// For Bluetooth HC-05, hold down the button on the Bluetooth module and then power it on to enter AT mode

void setup() {
	Serial.begin(9600);
	Serial1.begin(38400);
}

void loop() {
	while (Serial.available()) {
		int c = Serial.read();
		Serial.write(c);
		Serial1.write(c);
	}
	while (Serial1.available()) {
		Serial.write(Serial1.read());
	}
}
