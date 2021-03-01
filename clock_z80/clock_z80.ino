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

#include <avr/io.h>
//#include <SoftwareSerial.h>
//#include "SoftwareSerial.h"


#define z_clock_pin 0
#define freq_control_pin 3 // analog input
// the setup function runs once when you press reset or power the board

int val = 0;
int half_period = 10;

void setup() {  
  pinMode(z_clock_pin, OUTPUT);
  pinMode(freq_control_pin, INPUT);  
}



// the loop function runs over and over again forever
void loop() {
  val = analogRead(freq_control_pin);
  //analogRead(1) * 500L / 1023;
  //serial.print(val);
  half_period = map(val, 0, 1024, 10, 500);
  digitalWrite(z_clock_pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(half_period);                       // wait for a second
  digitalWrite(z_clock_pin, LOW);    // turn the LED off by making the voltage LOW
  delay(half_period);                       // wait for a second
}
