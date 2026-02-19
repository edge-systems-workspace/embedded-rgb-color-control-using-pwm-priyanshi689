#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Priyanshi
 * @date 19-02-2026
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

// Define RGB pins
#define RED_PIN   9
#define GREEN_PIN 10
#define BLUE_PIN  11

/**
 * @brief Initializes serial communication and configures RGB pins.
 */
void setup() {
    Serial.begin(9600);

    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    Serial.println("RGB LED initialized (Digital + PWM demo)");
}

/**
 * @brief Demonstrates digital ON/OFF and PWM brightness control for RGB LED.
 */
void loop() {
        // Digital mode demo
        digitalWrite(RED_PIN, HIGH);
        delay(450);
        digitalWrite(RED_PIN, LOW);

        digitalWrite(GREEN_PIN, HIGH);
        delay(450);
        digitalWrite(GREEN_PIN, LOW);
    }

    // -------- ANALOG (PWM) MODE --------
    analogWrite(RED_PIN, 120);     // RED brightness
    analogWrite(GREEN_PIN, 60);    // GREEN brightness
    analogWrite(BLUE_PIN, 180);    // BLUE brightness
    delay(1000);
}
