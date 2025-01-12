# Arduino_LED_Controller
Arduino LED Control via Serial Input

This project demonstrates how to control an LED connected to an Arduino board using serial input from a computer. By sending specific commands through the Serial Monitor, you can turn the LED on or off.


---

How It Works

1. LED Pin Setup: The LED is connected to pin 13 of the Arduino board.

2. Serial Communication: The Arduino listens for serial input (via USB connection).

3. Input Commands:

Sending 1: Turns the LED ON.

Sending 0: Turns the LED OFF.

4. Serial Feedback: The Arduino sends confirmation messages back to the Serial Monitor.

---

Requirements

Arduino board (e.g., Uno, Mega, Nano).

LED.

Resistor (220Ω recommended for current limiting).

USB cable to connect Arduino to the computer.

Arduino IDE.

---

Circuit Diagram

1. Connect the longer leg of the LED (anode) to pin 13.


2. Connect the shorter leg of the LED (cathode) to the resistor.


3. Connect the other end of the resistor to the Arduino's GND.

---

Setup Instructions

1. Open the Arduino IDE.

2. Copy and paste the code into the IDE.

3. Upload the code to the Arduino board.

4. Open the Serial Monitor (Ctrl+Shift+M).

5. Set the Serial Monitor to a baud rate of 9600 and line ending to None.


Usage

1. Type 1 in the Serial Monitor and press "Send" or Enter.

The LED will turn on, and the Serial Monitor will display: LED turned ON.



2. Type 0 in the Serial Monitor and press "Send" or Enter.

The LED will turn off, and the Serial Monitor will display: LED turned OFF.





---

Notes

Ensure the correct COM port and board type are selected in the Arduino IDE.

Make sure the baud rate in the Serial Monitor matches the code (9600).

Be cautious with the LED polarity (anode/cathode connections) to avoid damage.



---

Example Output

Input: 1
Output: LED turned ON

Input: 0
Output: LED turned OFF


Enjoy controlling your LED using the Arduino!
