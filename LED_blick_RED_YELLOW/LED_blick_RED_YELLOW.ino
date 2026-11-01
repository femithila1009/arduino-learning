int YellowLED=9;
int RedLED=8;
int OnTime=500;
int OffTime=500;
void setup() {

  // put your setup code here, to run once:
pinMode(YellowLED,OUTPUT);
pinMode(RedLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(YellowLED,HIGH);
digitalWrite(RedLED,HIGH);
delay(OnTime);
digitalWrite(YellowLED,LOW); //Together it blink together
digitalWrite(RedLED,LOW);
delay(OffTime);
//digitalWrite(RedLED,HIGH); //It blink one by one
//delay(OnTime);

}
