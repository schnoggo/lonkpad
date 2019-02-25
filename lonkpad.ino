#include <Wire.h>
#include <avr/io.h>
#include "lonkpad.h"
#include "switches.h"

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  
  	// Debugging output
	Serial.begin(9600);
  randomSeed(analogRead(2));

//	dprintln("STARTUP");
	Serial.println("yup");
}

// the loop function runs over and over again forever
void loop() {
  byte one_time = 0;

  delay(1000); // warm up
  // dump the array:
  if (0 == one_time){
    for (int z = 0; z < NUMBER_OF_SWITCHES; z++) {
      SwitchDef this_switch = scanable_inputs[z]; //SwitchDef
      Serial.print(this_switch.col);
      Serial.print("\t\t");
      Serial.println(this_switch.ID);

    }
        one_time = 1;  
  }


  
  
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(400); 
}