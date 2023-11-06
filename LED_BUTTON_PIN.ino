const int buttonPin = 2;
const int ledPin = 13;
int but_currentState; //variable to store the current state of the button
int LED_lastState = HIGH; //variable to store the previous state of the LED
int ledState = LOW;//variable to store the current state of the LED


void setup() {
  Serial.begin(9600);// Initialize serial communication at a baud rate of 9600
  pinMode(ledPin, OUTPUT);//Set the LED as output
  pinMode(buttonPin, INPUT);//Set the button as input
}

void loop() {
  but_currentState = digitalRead(buttonPin);//to read the current state of the button

  if (LED_lastState == HIGH && but_currentState == LOW) {   
    ledState = !ledState;//Toggle the LED state (ON to OFF or OFF to ON)
    digitalWrite(ledPin, ledState);//update the current state of the led
  }
  LED_lastState = but_currentState;  //update the last state to the current state for the loop
  delay(50);//make room for delay between states
  
}
