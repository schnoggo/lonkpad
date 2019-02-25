/**
 * switch input decription for the GameKey project
 * @package gamekey
 * @author Lon Koenig <lon@lonk.me>
 * @license https://opensource.org/licenses/MIT
 *
 * This file describes the physical connections of the
 * keyboard/keypad/switch array
 * and the gives every input an ID
 */



//
// Define the physical connections to the switches
//
#define NUMBER_OF_MATRICES 1


// names of input methods
// Each input can be read in different ways

#define METHOD_PIN_HI 0
#define METHOD_PIN_LO 1
#define METHOD_PIN_IMPULSE 2
// HI - input HIGH = button is pressed
// LO - input LOW = button is pressed
// IMPULSE -
#define METHOD_ARRAY 10
#define METHOD_I2C 20
#define METHOD_SPI 21


// names of pressed state
#define SWITCH_PRESSED_HI 0
#define SWITCH_PRESSED_LO 1
#define SWITCH_PRESSED_IMPULSE_HI 2
#define SWITCH_PRESSED_IMPULSE_LO 3
// HI - Switch is down as long as input is high
// LO - down is low
// IMPULSE HI - when switch goes high lock to pressed state
// IMPULSE LO - when switch goes low lock to pressed state



typedef struct {
  uint8_t method;
  uint8_t col; // matrix col (matrix rows/cols defined elsewhere) / pin
  uint8_t row; // matrix row (matrix rows/cols defined elsewhere)
  uint8_t matrix_id; // allow us to support multiple scan matrices
  uint8_t state;     // 0:still open,  1:from open to closed 2:from closed to open 3:still closed 4: unkown
  unsigned int lastvalue; // last actual value from the pin
  uint8_t repeat_count; // number of times this value has been read
  unsigned long lastclosed; // time of last read that was closed
  char* ID; // string identifier for this input (key mappings will be described elsewhere)
} SwitchDef;



#define NUMBER_OF_SWITCHES 3

SwitchDef scanable_inputs[NUMBER_OF_SWITCHES] = {
//               c  r  m  s  lv rp lc ID
  {METHOD_ARRAY, 0, 0, 0, 0, 0, 0, 0, "A"},
  {METHOD_ARRAY, 1, 0, 0, 0, 0, 0, 0, "B"},
  {METHOD_ARRAY, 2, 0, 0, 0, 0, 0, 0, "CKEY"}
};

