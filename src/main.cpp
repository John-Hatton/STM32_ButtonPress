#include <Arduino.h>

// Initialize Button State outside of loop function
int buttonState = 0;

void setup() {

pinMode(PA0, INPUT_PULLUP);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
// write your code here

    buttonState = digitalRead(PA0);

    if (buttonState == HIGH)
    {
        digitalWrite(LED_BUILTIN, HIGH);
    }
    else
    {
        digitalWrite(LED_BUILTIN, LOW);
    }
}