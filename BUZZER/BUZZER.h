// BUZZER.h
#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h> // Standard Arduino library for common functions

class BUZZER {
public:
    // Constructor to initialize the buzzer pin
    BUZZER(uint8_t buz_pin);

    // Predefined tones
    void ambulance();
    void police();
    void siren();
    void emergency();
    void error();
    void increase();
    void decrease();
    void phoneBell();

    // Buzzer control functions
    void TurnOnDevice();
    void TurnOffDevice();
    void InterruptDevice();
    void DelayDevice(unsigned long delay_ms);
    void SetFrequency(int freq_hz);

private:
    uint8_t _buz_pin;          // Buzzer pin
    unsigned long _last_millis; // Track timing for delays
};

#endif