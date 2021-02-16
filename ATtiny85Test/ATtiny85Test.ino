///*
//  DigitalReadSerial
//
//  Reads a digital input on pin 2, prints the result to the Serial Monitor
//
//  This example code is in the public domain.
//
//  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
//*/
//
//// digital pin 2 has a pushbutton attached to it. Give it a name:
//int pushButton = 2;
//
//// the setup routine runs once when you press reset:
//void setup() {
//  // initialize serial communication at 9600 bits per second:
//  Serial.begin(9600);
//  // make the pushbutton's pin an input:
//  pinMode(pushButton, INPUT);
//}
//
//// the loop routine runs over and over again forever:
//void loop() {
//  // read the input pin:
//  int buttonState = digitalRead(pushButton);
//  // print out the state of the button:
//  Serial.println(buttonState);
//  delay(1);        // delay in between reads for stability
//}

/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

#define LED_PIN  0 // special case for ATTiny85
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}