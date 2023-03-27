/* *************************
    by www.aldopi.it 1
    corso BASE Arduino
    v 1.0 - 31-10-2016
 * *************************
*/

void setup() {
  pinMode(8, OUTPUT);
}



void loop() {
  for (int i = 500; i < 2500; i = i + 50) {
    tone(8, i);
    delay(25);
  }
  for (int i = 2500; i > 500; i = i - 50) {
    tone(8, i);
    delay(25);
  }
}

// END
