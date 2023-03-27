/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: lettura stato pulsante accensione leds
 *      autore: www.AldoPi.it
 *        data: 3 novembre 2016
 *    versione: 1.0
 ******************************************* 
*/

/* istruzioni: switch - case
*/

// -------------------------------  dichiarazioni globali 
#define PULSANTE 4       //         porta collegata al pulsante
#define LEDBUILT 13      //         porta collegata al led - interno o esterno
#define LEDROSSO 11
#define LEDVERDE 12
int stato = 0;           //         variabile indica stato pulsante
int key = 0;  

void setup() {  // ---------------  setup
     pinMode(PULSANTE, INPUT);     // configuro pin INPUT per il pulsante
     pinMode(LEDROSSO, OUTPUT);
     pinMode(LEDVERDE, OUTPUT);     
     pinMode(LEDBUILT, OUTPUT);    // led interno un lampeggio di benventuo
     digitalWrite(LEDBUILT, HIGH);
     delay(500);
     digitalWrite(LEDBUILT, LOW);
}  // ============================  setup fine

void loop() {  // ----------------  loop

     key = digitalRead(PULSANTE);   // lettura stato pulsante
     if (key == 0 ) {
          stato = stato + 1; if (stato >3) stato = 0;  // incremento key 0-1-2-3
     }
     switch (stato) {
          case 0:
               digitalWrite(LEDROSSO, LOW);
               digitalWrite(LEDVERDE, LOW);
               break;
          case 1:
               digitalWrite(LEDROSSO, HIGH);
               digitalWrite(LEDVERDE, LOW); 
               break;
          case 2: 
               digitalWrite(LEDROSSO, LOW);
               digitalWrite(LEDVERDE, HIGH);
               break;
          case 3:
               digitalWrite(LEDROSSO, HIGH);
               digitalWrite(LEDVERDE, HIGH);
               break;         
     }

     while (!digitalRead(PULSANTE)) {   // ciclo vuoto attesa rilascio tasto
       delay(100);                      // attesa anti rimbalzo
     }
     delay(250);
}  // ============================  loop fine

// fine programma
