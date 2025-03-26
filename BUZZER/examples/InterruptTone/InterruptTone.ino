// InterruptTone.ino
#include <BUZZER.h>

#define BUZZER_PIN 9           // Buzzer connected to pin 9

BUZZER buzzer(BUZZER_PIN);    // Instantiate the buzzer object

void setup() {
    // No setup required
}

void loop() {
    buzzer.SetFrequency(1000); // Start generating a continuous tone at 1000 Hz
    delay(2000);               // Let the tone play for 2 seconds

    buzzer.InterruptDevice();  // Immediately stop the tone
    delay(1000);               // Pause for 1 second

    buzzer.TurnOnDevice();     // Resume generating a continuous tone
    delay(2000);               // Let the tone play for another 2 seconds

    buzzer.TurnOffDevice();    // Completely turn off the buzzer
    delay(1000);               // Pause for 1 second before restarting the cycle
}