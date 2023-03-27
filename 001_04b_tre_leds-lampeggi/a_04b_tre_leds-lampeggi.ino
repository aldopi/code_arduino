/* *************************
 *  by www.aldopi.it
 *  corso BASE Arduino
 *  v 1.0 - 31-10-2016
 * *************************
 */
 
#define ledrosso  12
#define ledgiallo 11
#define ledverde  10
#define tempo   3000

int i = 0 ;  // dichiarazione variabile numero intero 2 byte 0..65535

void setup() {
  pinMode(ledrosso, OUTPUT);
  pinMode(ledgiallo, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  i = 0;
  while (i <10) {               // lampeggio led rosso 10 volte
     digitalWrite(ledrosso, HIGH);
     delay(tempo);
     digitalWrite(ledrosso, LOW);
     delay(tempo);
     i = i+1;
  }
    i = 0;
  while (i <5) {               // lampeggio led verde 5 volte
     digitalWrite(ledverde, HIGH);
     delay(tempo);
     digitalWrite(ledverde, LOW);
     delay(tempo);
     i = i+1;
  }

  for (i=0, i<20, i=i+1) {    // ripeto per 20 volte lampeggio led giallo
     digitalWrite(ledgiallo, HIGH);
     delay(tempo);
     digitalWrite(ledgiallo, LOW);
     delay(tempo);
  }
}
  digitalWrite(ledverde, HIGH);
  delay(tempo);
  digitalWrite(ledgiallo, HIGH);
  delay(tempo);
  digitalWrite(ledgiallo, LOW);
  digitalWrite(ledverde, LOW);
}
