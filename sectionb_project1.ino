int pir = 2;
int led = 13;
int buzz = 8;

void setup() 
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop() 
{
  int motion = digitalRead(pir);

  if (motion == HIGH) 
  {
    digitalWrite(led, HIGH);
    tone(buzz, 1000);
  } 
  else 
  {
    digitalWrite(led, LOW);
    noTone(buzz);
  }
}