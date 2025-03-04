/*
  Serial Event example

  When new serial data arrives, this sketch adds it to a String.
  When a newline is received, the loop prints the string and clears it.

  A good test for this is to try it with a GPS receiver that sends out
  NMEA 0183 sentences.

  NOTE: The serialEvent() feature is not available on the Leonardo, Micro, or
  other ATmega32U4 based boards.

  created 9 May 2011
  by Tom Igoe

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/SerialEvent
*/

String inputString = "";         // a String to hold incoming data

void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial1.begin(9600);
  }
void loop() {
  if(Serial1.available())//frome other
  {
    Serial.println("Other say: "+Serial1.readString());
  }
  if(Serial.available())//from my computer
  {
    inputString = Serial.readString();
    Serial.println("I say: "+inputString);// print to other
    Serial1.println(inputString);// print to other

  }
}
