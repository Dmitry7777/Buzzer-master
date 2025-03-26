// BUZZER.cpp
#include "BUZZER.h"

// Constructor: initializes the buzzer pin
BUZZER::BUZZER(uint8_t buz_pin) : _buz_pin(buz_pin) {
    pinMode(_buz_pin, OUTPUT); // Configure the buzzer pin as an output
}

// Predefined Tones (these methods will use tone() internally)

void BUZZER::ambulance() {
    tone(_buz_pin, 440, 100);  // 440 Hz for 100 ms
    delay(200);
    tone(_buz_pin, 600, 100);  // 600 Hz for 100 ms
    delay(300);
}

void BUZZER::police() {
    tone(_buz_pin, 800, 500);  // 800 Hz for 500 ms
    delay(500);
    tone(_buz_pin, 1200, 500); // 1200 Hz for 500 ms
    delay(500);
}

void BUZZER::siren() {
    tone(_buz_pin, 700, 250);  // 700 Hz for 250 ms
    delay(400);
    tone(_buz_pin, 900, 250);  // 900 Hz for 250 ms
    delay(400);
}

void BUZZER::emergency() {
    tone(_buz_pin, 1500, 500); // 1500 Hz for 500 ms
    delay(500);
}

void BUZZER::error() {
    tone(_buz_pin, 1000, 200); // 1000 Hz for 200 ms
    delay(200);
    tone(_buz_pin, 500, 200);  // 500 Hz for 200 ms
    delay(200);
}

void BUZZER::increase() {
    for (int freq = 200; freq <= 2000; freq += 10) {
        tone(_buz_pin, freq, 20); // Gradually increasing tone from 200 Hz to 2000 Hz
        delay(25);
    }
}

void BUZZER::decrease() {
    for (int freq = 2000; freq >= 200; freq -= 10) {
        tone(_buz_pin, freq, 20); // Gradually decreasing tone from 2000 Hz to 200 Hz
        delay(25);
    }
}

void BUZZER::phoneBell() {
    tone(_buz_pin, 880, 200);    // Phone ringtone at 880 Hz for 200 ms
    delay(300);
    tone(_buz_pin, 660, 200);    // Followed by 660 Hz for 200 ms
    delay(300);
}

// Buzzer control functions

void BUZZER::TurnOnDevice() {
    digitalWrite(_buz_pin, HIGH); // Start buzzing continuously
}

void BUZZER::TurnOffDevice() {
    digitalWrite(_buz_pin, LOW);  // Stop buzzing
}

void BUZZER::InterruptDevice() {
    noTone(_buz_pin);             // Immediately stop any ongoing tone generation
}

void BUZZER::DelayDevice(unsigned long delay_ms) {
    _last_millis = millis();      // Record the current time
    delay(delay_ms);              // Wait for specified time
}

void BUZZER::SetFrequency(int freq_hz) {
    tone(_buz_pin, freq_hz);     // Generate continuous tone at given frequency
}