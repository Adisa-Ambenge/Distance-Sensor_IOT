
int temperature = 30;
int ledIndicator;

void setup(){
  pinMode(temperature, INPUT);
	pinMode(ledIndicator, OUTPUT);
}


void loop(){
int tempReading = analogRead(temperature);
  if (temperature > 30)
float voltage = tempReading * 5.0;
	digitalWrite(ledIndicator, HIGH);
	delay(2000);
}