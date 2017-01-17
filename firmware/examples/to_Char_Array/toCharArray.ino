//String message = "";
char buf[] = "";
int recArray(String param);
bool recvd = false;

void setup() {
	Serial.begin(9600);
	Particle.function("array", recArray);
}

void loop() {
	if (recvd) {
		//popArray(char* message);
		recvd = false;
	}
}

int recArray(String param) {
	if (param.length() <= 63) {
		param.toCharArray(buf, param.length());
		//char* Str1[64] = {param};
		//char* prnArray[] = {param};
		recvd = true;
		return 1;
	}
	else {
		return -1; // message too long
	}
}

/* void popArray(char* buff) {
	//for (int i = 0; i < message.length(); i++) {
		char* prnArray[] = {buff}; // extract the letters from the message
		//int len = prnArray[].length();
		for (int i = 0; i < prnArray[].length(); i++) {
			String x = prnArray[i];
			Serial.print("In Add: " + i);
			Serial.print(x);
		}
		Serial.end();
} */
