/* *************************
 *  by www.aldopi.it
 *  corso BASE Arduino
 *  02-11-2016
 * *************************
 */

/* istruzioni: variabili LOCALI e GLOBALI
 *             
*/

// -------------------------------  dichiarazioni GLOBALI 

 
void setup() {    // ---------------  setup
    Serial.begin(9600);
}  // ============================  setup fine


void loop() {   // ----------------  loop
    int i=0;    //  dichiarazione variabile LOCALE
    Serial.print(i);
    Serial.print("\t");
    Serial.println(random(-60, +60));
    i++;
    if (i>50) i=-50;
    delay(50);
}  // ============================  loop fine


// fine programma
