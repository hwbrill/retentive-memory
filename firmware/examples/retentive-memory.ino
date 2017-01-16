int led = D7;  // The on-board LED
int oneshot = 0;

void setup() {

  pinMode(led, OUTPUT);
  
  Particle.function("SP", text);
  
  Particle.function("led",ledToggle);
  
}

void loop() {

}

int text(String array)
{
	Particle.publish("SP-return", array);
	return 1;	
}	

int ledToggle(String command)
{
	if (command == "on") {
		digitalWrite(led,HIGH);
		return 1;
	}
	else if (command == "off") {
		digitalWrite(led,LOW);
		return 0;
	}
	else {
		return -1;
	}
}
