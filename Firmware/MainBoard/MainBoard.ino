/**
 * CYBERspace1 - Mainboard Firmware
 *
 * Written by Mark Koch for https://github.com/CircuitMonkey/cyberspace-1
 */

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h>
#endif

#define M328_LED  SCK
#define M328_LED_COUNT 1
#define LED_PIN    7
#define LED_COUNT 14

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel m328Led(M328_LED_COUNT, M328_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  m328Led.begin();
  m328Led.setBrightness(30);
  m328Led.setPixelColor(0, strip.Color(100,   0,   100));
  m328Led.show();

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void loop() {
  // Fill along the length of the strip in various colors...
  colorWipe(strip.Color(255,   0,   0), 50); // Red
  colorWipe(strip.Color(  0, 255,   0), 50); // Green
  colorWipe(strip.Color(  0,   0, 255), 50); // Blue

  // Do a theater marquee effect in various colors...
  theaterChase(strip.Color(127, 127, 127), 50); // White, half brightness
  theaterChase(strip.Color(127,   0,   0), 50); // Red, half brightness
  theaterChase(strip.Color(  0,   0, 127), 50); // Blue, half brightness

  rainbow(10);             // Flowing rainbow cycle along the whole strip
  theaterChaseRainbow(50); // Rainbow-enhanced theaterChase variant
}

