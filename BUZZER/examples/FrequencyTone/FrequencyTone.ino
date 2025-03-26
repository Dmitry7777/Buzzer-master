// FrequencyTone.ino
#include <BUZZER.h>
#include <QuadButtons.h>

// Define pins for the buzzer and buttons
#define BUZZER_PIN 9
#define BUTTON_PIN0 2
#define BUTTON_PIN1 3
#define BUTTON_PIN2 4
#define BUTTON_PIN3 5

// Instantiate objects for the buzzer and buttons
BUZZER buzzer(BUZZER_PIN);
QuadButtons buttons(BUTTON_PIN0, BUTTON_PIN1, BUTTON_PIN2, BUTTON_PIN3);

void setup() {
    // No setup required beyond initializing objects
}

void loop() {
    // Check if any button is pressed
    buttons.updateButtonStates();

    // Depending on which button is pressed, set the buzzer frequency
    if (buttons.getButtonState(1)) { // Button 1 pressed
        buzzer.SetFrequency(250);    // Set frequency to 250 Hz
    } else if (buttons.getButtonState(2)) { // Button 2 pressed
        buzzer.SetFrequency(500);    // Set frequency to 500 Hz
    } else if (buttons.getButtonState(3)) { // Button 3 pressed
        buzzer.SetFrequency(750);    // Set frequency to 750 Hz
    } else if (buttons.getButtonState(4)) { // Button 4 pressed
        buzzer.SetFrequency(1000);   // Set frequency to 1000 Hz
    }

    // Add a small delay to prevent rapid switching
    delay(50);
}