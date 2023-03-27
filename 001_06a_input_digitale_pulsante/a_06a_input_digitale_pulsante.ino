/*******************************************
 *    progetto: corso BASE Arduino
 * descrizione: lettura stato pulsante
 *      autore: www.AldoPi.it
 *        data: 3 novembre 2016
 *    versione: 1.0
 ******************************************* 
*/

/* istruzioni: pinMode(pin, INPUT);
 *             digitalRead(pin)      funzione per leggere le porte
 *             Serial                variabile che informa se è aperto il terminale
 *             ciclo attesa terminale seriale
*/

// -------------------------------  dichiarazioni globali 
//                                  (le costanti scritte in MAIUSCOLO)
#define PULSANTE 4  //              porta collegata al pulsante
#define LED 13      //              porta collegata al led - interno o esterno


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
     Serial.print("pulsante: ");
     Serial.println(digitalRead(PULSANTE));   // invio sul terminale lo stato del pulsante
     delay(250);
}  // ============================  loop fine


// fine programma
