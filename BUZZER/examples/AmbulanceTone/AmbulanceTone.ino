// AmbulanceTone.ino
#include <BUZZER.h>

#define BUZZER_PIN 9           // Buzzer connected to pin 9

BUZZER buzzer(BUZZER_PIN);    // Instantiate the buzzer object

void setup() {
    // No setup required
}

void loop() {
    buzzer.ambulance();        // Play ambulance siren sound
    delay(1000);               // Pause before repeating
}