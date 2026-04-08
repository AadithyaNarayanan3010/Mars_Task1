const int led = 3;
const int but = 4;

unsigned long start;
unsigned long react;

bool ledstate = false;

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(but, INPUT_PULLUP);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() 
{
  int wait = random(2000, 5000);
  delay(wait);
  digitalWrite(led, HIGH);
  start = millis();
  ledstate = true;

  while (ledstate) 
  {
    if (digitalRead(but) == LOW) 
    	{
          react= millis() - start;
          Serial.print("Reaction time: ");
          Serial.print(react);
          Serial.println(" ms");
          digitalWrite(led, LOW);
          ledstate = false;
          delay(2000);
    	}
  }
}