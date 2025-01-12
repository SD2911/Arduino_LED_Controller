const int ledPin = 13; // Define the pin connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) { // Check if there is data available on the serial port
    int input = Serial.read() - '0'; // Read the input character and convert it to an integer

    if (input == 1) {
      digitalWrite(ledPin, HIGH); // Turn the LED on
      Serial.println("LED turned ON");
    } else if (input == 0) {
      digitalWrite(ledPin, LOW); // Turn the LED off
      Serial.println("LED turned OFF");
    }
  }
}