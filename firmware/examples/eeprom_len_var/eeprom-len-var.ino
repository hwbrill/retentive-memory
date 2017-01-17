int length = 0;
int addr = 10;

void setup() {
	Particle.variable("eeprom", length);
}
void loop() {
	/*size_t e*/length = EEPROM.length();
	//length = elength;
}
