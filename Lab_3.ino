/* 
 * Lab 3
 * Ethan Sayles
 * Proffessor Kyle Tarplee
 * 9/15/2015
 * Blinking SOS LED
 */
void setup() {
  // set pin 12 as the pin for output
  pinMode(12, OUTPUT);
}

void blink(int t, int t2) {
  digitalWrite(12, HIGH);   //turn the green light ON
  delay(t);                 //keep the light ON for 't' seconds
  digitalWrite(12, LOW);    // turn the green light OFF
  delay(t2);                //keep the light OFF for 't2' seconds
}
void sos(){
  blink(200,200);   // first part of the SOS message i.e. 'S'
  blink(200,200);
  blink(200,500);
  
  blink(500,500);   // second part of the SOS message i.e. 'O'
  blink(500,500);
  blink(500,500);
  
  blink(200,200);   // third part of the SOS message i.e. 'S'
  blink(200,200);
  blink(200,900);
}
void loop() {
  sos();         //Loop the sos signal for eternity     
}
