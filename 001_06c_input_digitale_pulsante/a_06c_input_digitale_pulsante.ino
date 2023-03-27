/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: lettura stato pulsante
 *      autore: www.AldoPi.it
 *        data: 3 novembre 2016
 *    versione: 1.0
 ******************************************* 
*/

/* istruzioni: IF () ELSE
 *             ciclo attesa rilascio pulsante
*/


// -------------------------------  dichiarazioni globali 
#define PULSANTE 4  //              porta collegata al pulsante
#define LED 13      //              porta collegata al led - interno o esterno

int stato = 0;      //              variabile indica stato pulsante


void setup() {  // ---------------  setup
     Serial.begin(9600);
         while (!Serial) {         // attesa che venga aperto il terminale seriale
     }
     Serial.println("test pulsante. Avvio...");
     pinMode(PULSANTE, INPUT);     // configuro pin INPUT per il pulsante
     pinMode(LED, OUTPUT);         // led interno un lampeggio di benventuo
     digitalWrite(LED, HIGH);
     delay(500);
     digitalWrite(LED, LOW);
}  // ============================  setup fine


void loop() {  // ----------------  loop
     stato = digitalRead(PULSANTE);   // lettura stato pulsante
     Serial.print("pulsante: ");
     if (stato == 1 ) Serial.println("rilasciato");  // verifica stato pulsante
     else             Serial.println("premuto");

     while (!digitalRead(PULSANTE)) {  // ciclo a vuoto in attesa che venga rilasciato il pulsante
          delay(100);
     }
     delay(250);
}  // ============================  loop fine

// fine programma
