/**
 * Read inputs
 */


// set up hardware pins:
/**
 * Initalize the the pin states. The big switch map gives us the info
 *
 *
 */
void SetHWPins(){
//  #ifdef __AVR_ATtiny85_
// apparently only needed for analog reads

/*
  pinMode(BUTTON_PIN, INPUT); // make this an input [ INPUT, OUTPUT, or INPUT_PULLUP
  pinMode(VIBRATION_PIN, INPUT);
*/
 }



void ClearButtonState(){
  /*
  button_state_start_time = millis(); // reset the stablility timer
  current_button_state = false;
  prev_button_state = hardware_button_state;
  button_seen_up = false;
*/
}



/**
 * Background funtion to poll inputs and set global values for input states
 */
void UpdateButtonState(){
// globals:
// button_state_start_time
// current_button_state
// prev_button_state
// button_seen_up
//
// For latching shake sensor (vibration switch)
//  shaking_latch_release
//  shaking
unsigned long now = millis();
/*
  // only update state if latching duration has expired
  if (shaking_latch_release <= now ) { // latch duration is up
      if (digitalRead(VIBRATION_PIN) == HIGH){
        shaking = true;
        new_shake = true;
        shaking_latch_release = now + SHAKING_LATCH_DURATION;
      } else {
        shaking = false;
      }
  } else {
      shaking = false;
  }
*/



}
