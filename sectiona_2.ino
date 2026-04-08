int pot = A0;
int red = 7;
int green = 3;
int blue = 5;
int led = 8;
void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(led, OUTPUT);
}
void loop() 
{
  int potval = analogRead(pot);
  potval=1023-potval;
  if (potval < 341) 
  {
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  }
  else if (potval < 682) 
  {
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  }
  else 
  {
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  }
  digitalWrite(led, HIGH);
  delay(50);
  potval = analogRead(pot);
  int del = 1000 - ((potval * 900) / 1023);
  digitalWrite(led, LOW);
  delay(del);
}