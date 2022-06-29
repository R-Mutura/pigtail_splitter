#include <FastLED.h>

#define NUM_LEDS 120
#define LED_PIN 7

CRGB leds(NUM_LEDS);


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(64);
}

void loop() {
  // put your main code here, to run repeatedly:
   for (int i = 0; i<NUM_LEDS; i++){
     leds[i]= CRGB(120, 255, 15);
    }
    FastLED.show();
}
