int REDLED = 4;      // Red Led declear at pin no 4
int YELLOWLED = 5;    // Yellow Led declear at pin no 5
int Redontime = 500;     // How long will it on the RedLed blinck
int Redofftime = 500;    // Red Led off time of licking
int Yellowontime = 500;   // YellowLED blinck on time
int Yellowofftime = 500;  // YellowLed blinck off time 
int numRedBlinck = 4;      // Number of Red Led blinck time
int numYellowBlinck = 3;   // Number of Yellow Led Blinck time
void setup() {
  pinMode(REDLED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);

}

void loop() {
  for(int i =1; i<= numRedBlinck; i=i+1) {
  digitalWrite(REDLED,HIGH); //Turn the Red Led on
  delay(Redontime);          // Wait
  digitalWrite(REDLED, LOW);   // Turn off Red LED
  delay(Redofftime);          //  Wait
  }
// REDLED after blinck 4 times Yellow LED will blinck
for(int i = 1; i<= numYellowBlinck; i = i+1){
  digitalWrite(YELLOWLED, HIGH);   //Turn on Yellow LED
  delay(Yellowontime);            // Wait
  digitalWrite(YELLOWLED, LOW);   //Turn off Yellow LED
  delay(Yellowofftime);         //Wait
}
}
