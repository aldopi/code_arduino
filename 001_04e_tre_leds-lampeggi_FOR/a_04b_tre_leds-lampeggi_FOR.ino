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
  for (i = 1; i < 10; i = i + 1)  {  
     // lampeggio led rosso 10 volte
     digitalWrite(ledrosso, HIGH);
     delay(tempo);
     digitalWrite(ledrosso, LOW);
     delay(tempo);
  }
  for (i = 1; i < 5; i++) {  // i=i+1 equivale a i++
     // lampeggio led verde 5 volte
     digitalWrite(ledverde, HIGH);
     delay(tempo);
     digitalWrite(ledverde, LOW);
     delay(tempo);
  }

  for (i = 1; i < 20; i++) {    
     // lampeggio led giallo 20 volte
     digitalWrite(ledgiallo, HIGH);
     delay(tempo);
     digitalWrite(ledgiallo, LOW);
     delay(tempo);
  }
}
