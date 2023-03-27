/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: lettura analogica fotoresistenza
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
#define LEDBUILT 13      //         porta collegata al led - interno o esterno
int valore = 0;
int numero = 0;

void setup() {  // ---------------  setup
     Serial.begin(9600);
     while (!Serial) {         // attesa che venga aperto il terminale seriale
     }
     Serial.println("test lettura Fotoresistenza. Avvio...");
  
     pinMode(LEDBUILT, OUTPUT);    // led interno un lampeggio di benventuo
     digitalWrite(LEDBUILT, HIGH);
     delay(500);
     digitalWrite(LEDBUILT, LOW);
}  // ============================  setup fine

void loop() {  // ----------------  loop

     valore = analogRead(FOTORESISTENZA);   // lettura stato pulsante
                                            // valore tra 0 e 1023
     numero = valore /4;
     Serial.print(valore);
     Serial.print("\t");
     Serial.println(numero);

     delay(500);
}  // ============================  loop fine

// fine programma
