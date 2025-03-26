// PhoneBellTone.ino
#include <BUZZER.h>

#define BUZZER_PIN 9           // Buzzer connected to pin 9

BUZZER buzzer(BUZZER_PIN);    // Instantiate the buzzer object

void setup() {
    // No setup required
}

void loop() {
    buzzer.phoneBell();        // Play the phone bell tone
    delay(2000);               // Pause for 2 seconds before repeating
}