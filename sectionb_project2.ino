const int temper = A0;
const int motor = 9;
float threshold = 30.0;
void setup() 
{
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int reading = analogRead(temper);
  float voltage = reading * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100;
  Serial.println(temperatureC);
  if (temperatureC > threshold) 
  {
    digitalWrite(motor, HIGH);
  } 
  else 
  {
    digitalWrite(motor, LOW);
   	delay(500);
  }
}