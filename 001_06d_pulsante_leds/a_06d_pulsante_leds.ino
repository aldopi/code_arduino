/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: lettura stato pulsante accensione led
 *      autore: www.AldoPi.it
 *        data: 3 novembre 2016
 *    versione: 1.0
 ******************************************* 
*/

/* istruzioni: 
*/

// -------------------------------  dichiarazioni globali 
#define PULSANTE 4       //         porta collegata al pulsante
#define LEDBUILT 13      //         porta collegata al led - interno o esterno
#define LEDVERDE 12
int key = 0;  

void setup() {  // ---------------  setup
     pinMode(PULSANTE, INPUT);     // configuro pin INPUT per il pulsante
     pinMode(LEDVERDE, OUTPUT);     
     pinMode(LEDBUILT, OUTPUT);    // led interno un lampeggio di benventuo
     digitalWrite(LEDBUILT, HIGH);
     delay(500);
     digitalWrite(LEDBUILT, LOW);
}  // ============================  setup fine

void loop() {  // ----------------  loop
     key = digitalRead(PULSANTE);   // lettura stato pulsante
     if (key == 0 )  digitalWrite(LEDVERDE, HIGH);
     else            digitalWrite(LEDVERDE, LOW);

     delay(250);

}  // ============================  loop fine

// fine programma
