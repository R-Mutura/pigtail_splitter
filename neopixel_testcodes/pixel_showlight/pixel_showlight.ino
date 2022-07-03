#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 60
#define DATA_PIN 15

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);  // GRB ordering is typical
 FastLED.setBrightness(64);
}

void loop() {
  // put your main code here, to run repeatedly:
  //1.
  for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Red;
      FastLED.show();
    }
    delay(1000);
    //2.
    FastLED.clear();
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Blue;
      FastLED.show();
    }
     //3.
    FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Green ;
      FastLED.show();
    }
       //4.
       FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Sienna;
      FastLED.show();
    }
    //5.
    FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Amethyst ;
      FastLED.show();
    }
//    //6.
FastLED.clear();
//        delay(1000);
//    for(int i= 0; i<NUM_LEDS; i++){
//      leds[i] = CRGB::Seashell   ;
//      FastLED.show();
//    }
//     //7.
//FastLED.clear();
//        delay(1000);
//    for(int i= 0; i<NUM_LEDS; i++){
//      leds[i] = CRGB::Violet    ;
//      FastLED.show();
//    }
//     //8.
//        delay(1000);
//    for(int i= 0; i<NUM_LEDS; i++){
//      leds[i] = CRGB::Bisque    ;
//      FastLED.show();
//    }
    //9.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::BlueViolet     ;
      FastLED.show();
    }
      //10.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Brown      ;
      FastLED.show();
    }
      //11.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Yellow;
      FastLED.show();
    }
//     //12.
//FastLED.clear();
//        delay(1000);
//    for(int i= 0; i<NUM_LEDS; i++){
//      leds[i] = CRGB::Khaki;
//      FastLED.show();
//    }
//      //13.
//        delay(1000);
//    for(int i= 0; i<NUM_LEDS; i++){
//      leds[i] = CRGB::Chartreuse         ;
//      FastLED.show();
//    }
       //14.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::LightSeaGreen;
      FastLED.show();
    }
        //15.
        FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Magenta;
      FastLED.show();
    }
       //16.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::CornflowerBlue            ;
      FastLED.show();
    }
         //17.
         FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Cornsilk             ;
      FastLED.show();
    }
       //18.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Beige              ;
      
      FastLED.show();
    }
      //19.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Bisque               ;
      FastLED.show();
    }
       //20.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::BlanchedAlmond                ;
      FastLED.show();
    }
 /***********************************************************************************************/
      //1.
      FastLED.clear();
      delay(1000);
  for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Crimson ;
      FastLED.show();
    }
    delay(1000);
    //2.
    FastLED.clear();
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Cyan ;
      FastLED.show();
    }
     //3.
     
     FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkBlue  ;
      FastLED.show();
    }
       //4.
       FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkCyan  ;
      FastLED.show();
    }
    //5.
    FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkGoldenrod  ;
      FastLED.show();
    }
    //6.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkGray   ;
      FastLED.show();
    }
     //7.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkGreen    ;
      FastLED.show();
    }
     //8.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkGrey     ;
      FastLED.show();
    }
    //9.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkKhaki      ;
      FastLED.show();
    }
      //10.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkMagenta       ;
      FastLED.show();
    }
      //11.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkOliveGreen        ;
      FastLED.show();
    }
     //12.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkOrange         ;
      FastLED.show();
    }
      //13.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkOrchid          ;
      FastLED.show();
    }
       //14.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkRed           ;
      FastLED.show();
    }
        //15.
        FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkSalmon            ;
      FastLED.show();
    }
       //16.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkSeaGreen             ;
      FastLED.show();
    }
         //17.
         FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkSlateBlue              ;
      FastLED.show();
    }
       //18.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkSlateGray               ;
      FastLED.show();
    }
      //19.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkSlateGrey                ;
      FastLED.show();
    }
       //20.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkTurquoise                 ;
      FastLED.show();
    }
/******************************************************************************************************************/
        //1.
        FastLED.clear();
        delay(1000);
  for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DarkViolet  ;
      FastLED.show();
    }
    delay(1000);
    //2.
    FastLED.clear();
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DeepPink  ;
      FastLED.show();
    }
     //3.
     FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DeepSkyBlue   ;
      FastLED.show();
    }
       //4.
       FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DimGray   ;
      FastLED.show();
    }
    //5.
    FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DimGrey   ;
      FastLED.show();
    }
    //6.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::DodgerBlue    ;
      FastLED.show();
    }
     //7.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::FairyLight     ;
      FastLED.show();
    }
     //8.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::FairyLightNCC      ;
      FastLED.show();
    }
    //9.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::FireBrick       ;
      FastLED.show();
    }
      //10.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::FloralWhite        ;
      FastLED.show();
    }
      //11.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::ForestGreen         ;
      FastLED.show();
    }
     //12.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Fuchsia          ;
      FastLED.show();
    }
      //13.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Gainsboro           ;
      FastLED.show();
    }
       //14.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::GhostWhite            ;
      FastLED.show();
    }
        //15.
        FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Gold             ;
      
      FastLED.show();
    }
       //16.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Goldenrod              ;
      FastLED.show();
    }
         //17.
         FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Gray               ;
      FastLED.show();
    }
       //18.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Grey                ;
      FastLED.show();
    }
      //19.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Honeydew                 ;
      FastLED.show();
    }
       //20.
       FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::HotPink                  ;
      FastLED.show();
    }
 /********************************************************************************************************************************/
         //1.
         FastLED.clear();
         delay(1000);
  for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Lavender   ;
      FastLED.show();
    }
    delay(1000);
    //2.
    FastLED.clear();
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::LightSlateGrey   ;
      FastLED.show();
    }
     //3.
     FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::LimeGreen    ;
      FastLED.show();
    }
       //4.
       FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Magenta    ;
      FastLED.show();
    }
    //5.
    FastLED.clear();
    delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Maroon    ;
      FastLED.show();
    }
    //6.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::MediumBlue     ;
      FastLED.show();
    }
     //7.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::MidnightBlue      ;
      FastLED.show();
    }
     //8.
     FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::SandyBrown        ;
      FastLED.show();
    }
    //9.
    FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::PapayaWhip        ;
      FastLED.show();
    }
      //10.
      FastLED.clear();
        delay(1000);
    for(int i= 0; i<NUM_LEDS; i++){
      leds[i] = CRGB::Purple         ;
      FastLED.show();
    }
}
