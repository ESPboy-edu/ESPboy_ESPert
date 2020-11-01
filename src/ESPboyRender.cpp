/*
ESPboy_render class to render ssd1306 to TFT
for www.ESPboy.com project by RomanS
https://hackaday.io/project/164830-espboy-games-iot-stem-for-education-fun
v1.0
*/

#include "ESPboyRender.h"

ESPboyRender::ESPboyRender(TFT_eSPI *tftparameter){
  tft=tftparameter;
};

void ESPboyRender::init(){
  tft->fillScreen(TFT_BLACK);
};


void ESPboyRender::display(){
  static uint16_t bufLine[128], drawcolor, drawcolorback; 
  static uint32_t i, j, addr, drawaddr;
  
  addr=0;
  drawcolor = LHSWAP(colors[foregroundclr]);
  drawcolorback = LHSWAP(colors[backgroundclr]);

  for (i = 0; i < 64; i++){
    for (j = 0; j < 128; j++)
      if (buffer[addr++]) bufLine[j] = drawcolor;
      else bufLine[j] = drawcolorback;
    tft->pushImage(0, i+16, 128, 1, bufLine);
  }
};


void ESPboyRender::flipScreenVertically(){};

void ESPboyRender::setContrast(uint8_t no){};

void ESPboyRender::clear(){
    memset(buffer, 0, sizeof(buffer));
};

void ESPboyRender::setColor(uint8_t clr){
  _setcolor = clr;
  };

void ESPboyRender::drawString(uint16_t cursorX, uint16_t cursorY, String t){
 // tft->setTextColor(foregroundclr, backgroundclr);
  //tft->drawString(t, cursorX, cursorY+20, 1);
};


void ESPboyRender::drawXbm(int16_t x, int16_t y, int16_t w, int16_t h, const uint8_t *bitmap){ 
  uint8_t readbyte, drawcolor; 
  int32_t bufaddr, picaddr;
   
 if(_setcolor==ESPERT_BLACK) drawcolor=0;
 else drawcolor=1;

  picaddr=0;
  for (int32_t ypos=0; ypos<h; ypos++){
    bufaddr = ((ypos+y)<<7)+x;
    for(int32_t xpos=0; xpos<w; xpos+=8){
      readbyte = pgm_read_byte(&bitmap[picaddr++]);
      for(uint32_t bit=0; bit<8; bit++){
          if ((xpos+x+bit)>=0 && (xpos+x+bit)<128 && (ypos+y)>=0 && (ypos+y)<64){
            if(bitRead(readbyte,bit)){buffer[bufaddr]=drawcolor;}
          }
        bufaddr++;
       }
     }
  }
}
   
    

  
