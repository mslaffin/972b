#include <972b.h>

void setup() {
    Serial.begin(9600);   // initialize PC COM interface
    Serial2.begin(9600);  // initialize UART-RS486 transceiver interface

    String response;
    
    sendCommand("MD?"); // Query device model number
    response = readResponse();
    Serial.println("Model Number: " + response);
}

void loop() {
}