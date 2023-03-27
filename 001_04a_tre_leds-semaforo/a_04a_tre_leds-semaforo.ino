/* *************************
 *  by www.aldopi.it
 *  corso BASE Arduino
 *  v 1.0 - 31-10-2016
 * *************************
 */
 
#define ledrosso  7
#define ledgiallo 6
#define ledverde  5
#define tempo   1000

void setup() {
  pinMode(ledrosso, OUTPUT);
  pinMode(ledgiallo, OUTPUT);
  pinMode(ledverde, OUTPUT);
}


void loop() {
  digitalWrite(ledrosso, HIGH);
  delay(tempo);
  digitalWrite(ledrosso, LOW);
  digitalWrite(ledverde, HIGH);
  delay(tempo);
  digitalWrite(ledgiallo, HIGH);
  delay(tempo);
  digitalWrite(ledgiallo, LOW);
  digitalWrite(ledverde, LOW);
}
