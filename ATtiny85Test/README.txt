support for ATtiny on arduino IDE is needed.
necessary software /instruction is here.
https://github.com/damellis/attiny

I am programming the ATtiny85 using Arduino mega.

In the instructions pdf, the author forgot to mention to change in the arduino ide --> tools

make sure to change Programmer to "Arduino as ISP"


Mapping according to instructions (can choose different)


Mega           ATtiny85

51               5 (MOSI)
50               6 (MISO)
52               7 (SCK)
53               1 (SS) 

VCC              8
GND              4
 
If we want to flash an LED use 0 in script, but it is pin 5 on ATtiny


* don't forget to reset to normal when finished  Progarmmer back to "AVRISP mkll"