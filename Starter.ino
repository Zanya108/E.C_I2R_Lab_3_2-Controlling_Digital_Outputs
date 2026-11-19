/* For this assignment you will do the following:
The green light blinks on for 200 ms and off 200 ms two times.
There is a one second pause.
The blue light does the same thing as the green just did.
There is a three second pause.
Both lights alternate blinking off and on for 650 ms each. (They continue this forever)

This video illustrated what we are going for: https://www.youtube.com/watch?v=1TTnCqdSPqc
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT); //blue
  pinMode(8,OUTPUT); //green
  digitalWrite(8, HIGH); //on
  delay(200);
  digitalWrite(8,LOW); //off
  delay(200);
  digitalWrite(8, HIGH); //on
  delay(200);
  digitalWrite(8,LOW); //off
  delay(1000);
  digitalWrite(7,HIGH); //on
  delay(200);
  digitalWrite(7,LOW); //off
  delay(200);
  digitalWrite(7,HIGH); //on
  delay(200);
  digitalWrite(7,LOW); //off
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); //on
  delay(650);
  digitalWrite(8,LOW); //off
  delay(650);
  digitalWrite(7, HIGH); //on
  delay(650);
  digitalWrite(7,LOW); //off
  delay(650);
}
