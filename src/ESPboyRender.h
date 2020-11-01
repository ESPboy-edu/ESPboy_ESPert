/*
ESPboy_render class to render ssd1306 to TFT
for www.ESPboy.com project by RomanS
https://hackaday.io/project/164830-espboy-games-iot-stem-for-education-fun
v1.0
*/

#ifndef ESPboy_render
#define ESPboy_render

#define LHSWAP(w) (uint16_t)((((uint16_t)w)>>8)|(((uint16_t)w)<<8))

#define ESPERT_BLACK   0
#define ESPERT_WHITE   1
#define ESPERT_INVERSE 2


#include <Arduino.h>
#include <TFT_eSPI.h>          //to draw at LCD TFT

class ESPboyRender{

private:
  TFT_eSPI *tft;
  uint8_t _setcolor=1;
  uint16_t colors[19] = { 
            TFT_BLACK, TFT_NAVY, TFT_DARKGREEN, TFT_DARKCYAN, TFT_MAROON,
            TFT_PURPLE, TFT_OLIVE, TFT_LIGHTGREY, TFT_DARKGREY, 
            TFT_BLUE, TFT_GREEN, TFT_CYAN,
            TFT_RED, TFT_MAGENTA, TFT_YELLOW, TFT_WHITE, 
            TFT_ORANGE, TFT_GREENYELLOW, TFT_PINK};
   
   
public:
  uint8_t foregroundclr = 14;
  uint8_t backgroundclr = 0;
  uint8_t buffer[128*64];
  ESPboyRender(TFT_eSPI *tftparameter);
  void init();
  void flipScreenVertically();
  void setContrast(uint8_t no);
  void display();
  void clear();
  void setColor(uint8_t clr);
  void drawXbm(int16_t x, int16_t y, int16_t w, int16_t h, const uint8_t *bitmap);
  void drawString(uint16_t cursorX, uint16_t cursorY, String t);
};

#endif
