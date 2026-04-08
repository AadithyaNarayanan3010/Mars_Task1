// C++ code
//
int red_led=3;
int yellow_led=5;
int green_led=7;
const unsigned long intred=500;
const unsigned long intyellow=1000;
const unsigned long intgreen=1500;
unsigned long prevred=0;
unsigned long prevgreen=0;
unsigned long prevyellow=0;
bool statered=LOW;
bool stateyellow=LOW;
bool stategreen=LOW;



void setup()
{
pinMode(red_led, OUTPUT);
pinMode(yellow_led, OUTPUT);
pinMode(green_led, OUTPUT);
}
void loop()
{
  unsigned long current=millis();
  
  if (current-prevred>=intred)
  {
	prevred=current;
    statered=!statered;
    digitalWrite(red_led,statered);
  }
    if (current-prevyellow>=intyellow)
  {
	prevyellow=current;
    stateyellow=!stateyellow;
    digitalWrite(yellow_led,stateyellow);
  }
    if (current-prevgreen>=intgreen)
  {
	prevgreen=current;
    stategreen=!stategreen;
    digitalWrite(green_led,stategreen);
  }
}

//