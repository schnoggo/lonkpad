/**
 * Constants and macros for the GameKey project
 * @package gamekey
 * @author Lon Koenig <lon@lonk.me>
 * @license https://opensource.org/licenses/MIT
 */

// code compile-time options:

// if true, compile in the LED lighting:
#define USE_LED false

// How far to step around the color wheel when we change colors:
#define COLOR_WHEEL_STEP 16

// Describe the hardware:
// Size of neopixel strip:
#define NEOPIXEL_SIZE 16
// Data pin for NeoPixels:
#define NEOPIXEL_PIN 0



//

// NeoPixel Animations:
#define SPARKS_ANIM 0
#define SPINNY_ANIM 1
#define GOOGLY_ANIM 2
#define LARSON_SCANNER 3
#define HALF_BLINK_ANIM 4
#define FLASH_ANIM 5
#define SOLID_ANIM 6
#define COMET_ANIM 7
#define FLAME_ANIM 99

// other animation Constants:
#define FADE_LENGTH 5

#define PRDBG
// macros:
// create Serial.print macros:
#ifdef PRDBG
#define dprint(ccc) Serial.print(ccc);
#define dprintln(ccc) Serial.println(ccc);
#else
#define dprint(ccc) ""
#define dprintln(ccc) ""
#endif
