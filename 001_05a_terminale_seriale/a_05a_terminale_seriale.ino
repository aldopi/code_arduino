/* *************************
 *  by www.aldopi.it
 *  corso BASE Arduino
 *  v 1.0 - 31-10-2016
 * *************************
 */
 
 void setup() {
  Serial.begin(9600);
  Serial.println("uso terminale... avvio");
  Serial.println("");
}


void loop() {
  Serial.println("numerazione... avvio");

  Serial.print("numero: ");
  Serial.println("1");
  
  Serial.print("numero: ");
  Serial.println("2");

  Serial.print("numero: ");
  Serial.println("3");

  Serial.print("numero: ");
  Serial.println("4");

  Serial.print("numero: ");
  Serial.println("5");  

  Serial.println("------------------ fine");
  Serial.println("");
  delay(5000);

}
