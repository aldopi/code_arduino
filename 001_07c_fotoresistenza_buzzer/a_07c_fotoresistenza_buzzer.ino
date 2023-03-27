/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: fotoresistenza buzzer
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
#define BUZZER 4         //         porta collegata al BUZZER
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
     numero = valore *3;                    // calcolo tempo frequenza suono
     tone(BUZZER, numero);
     delay(250);

}  // ============================  loop fine

// fine programma
