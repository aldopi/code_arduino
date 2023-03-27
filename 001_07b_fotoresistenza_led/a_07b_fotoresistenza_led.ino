/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: fotoresistenza lampeggio led
 *      autore: www.AldoPi.it
 *        data: 3 novembre 2016
 *    versione: 1.0
 ******************************************* 
*/

/* istruzioni: analogRead(pin);
 *             
*/

// -------------------------------  dichiarazioni globali 
#define FOTORESISTENZA 0 //         porta analogica A0 collegata alla fotoresistenza
#define LEDRED 12        //         porta collegata al led esterno
#define LEDBUILT 13
int valore = 0;
int numero = 0;

void setup() {  // ---------------  setup
     pinMode(LEDBUILT, OUTPUT);    // led interno un lampeggio di benventuo
     digitalWrite(LEDBUILT, HIGH);
     delay(500);
     digitalWrite(LEDBUILT, LOW);
     pinMode(LEDRED, OUTPUT);
}  // ============================  setup fine

void loop() {  // ----------------  loop

     valore = analogRead(FOTORESISTENZA);   // lettura stato pulsante
                                            // valore tra 0 e 1023
     numero = valore *2;                    // calcolo tempo lampeggio led
     digitalWrite(LEDRED, HIGH);
     delay(numero);
     digitalWrite(LEDRED, LOW);
     delay(numero);
}  // ============================  loop fine

// fine programma
