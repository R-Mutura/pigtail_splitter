#include <FastLED.h>

#define DATA_PIN  15
#define NUM_LEDS  70
#define led_type  WS2812


int brightness = 64;
long long prev_number;
CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0; i<NUM_LEDS; i++){
     leds[i] = CRGB::Red;
     FastLED.show();
     delay(100);
    
  }
   for(int i=NUM_LEDS-1; i>=0; i--){
     ///leds[i] = CRGB::Red;
    
     delay(100);
     leds[i] = CRGB::Black;
      FastLED.show();
  }
}
