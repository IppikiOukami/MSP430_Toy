#include <msp430.h>
#include "led.h"

unsigned char red_on = 0, green_on = 0;
unsigned char leds_changed = 0;

static char r_val[] = {0,LED_RED}, g_val[] = {0, LED_GREEN};

void led_init(){
  P1DIR |= LEDS;// bits attached to leds are output
  leds_changed = 1;
  led_modify();
}

void led_modify(){
  if (leds_changed){
    char indicator = redVal[red_on] | greenVal[green_on];

    P1OUT &= (0xff - LEDS) | ledFlags; // set to off 
    P1OUT |= ledFlags;                 // set to on  Based on current state
    leds_changed = 0;
  }
}
