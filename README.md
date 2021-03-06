[![Build Status](https://travis-ci.org/JimmySoftware/ESPert.svg?branch=master)](https://travis-ci.org/JimmySoftware/ESPert)

# ESPboy ESPert port of the games

This is a fork of the original ESPert library for www.espboy.com project

Please note that library was not ported to provide full functionality.
It was a little bit modified to have fun with playing games on ESPboy.

List of games:
- Flappy Bird
- PacMan
- Octopus
- Breakout 

You have to:
1. Download this library and rename its folder to "ESPert"
2. Install this library to your Arduino IDE
3. Compile the file with games "_9100_Game_All_in_One_ed.ino" from the "example" folder
4. Have fun


# ESPert
Welcome to the ESPert Arduino library for users of the ESPresso Lite.
Please proceed to follow the procedures as prescribed in the ESPresso Lite tutorial (http://espressolite.com).

# Setup
## Arduino Software
- Install Arduino 1.8.1 from https://www.arduino.cc/en/Main/Software

## ESP8266 Board Manager
- Start Arduino and open Preference
- Enter the URL http://arduino.esp8266.com/stable/package_esp8266com_index.json into Additional Board Manager URLs field. If you have multiple URLs, separating them with commas.
- Open Boards Manager from Tools > Board > Board Manager then install esp8266 by ESP8266 Community (current version is 2.2.0)
- From menu Tools > Board select Generic ESP8266 Module

## Install dependency for ESPert
Open Library Manager (menu Sketch > Include Library > Manage Libraries…) then install the following libraries
- ESPert by Jimmy (current version 1.3.0)
- DHT sensor library by Adafruit (current version 1.2.3) *
- PubSubClient by Nick O'Leary (current version 2.6.0)
- ArduinoJson by Benoit Blanchon (current version 5.8.3) 
- HttpClient by Adrian McEwen (current version 2.2.0)
- ESP8266 Oled Driver for SSD1306 display by Daniel Eichborn, Fabrice Weinberg (current version 3.2.5) 
- Adafruit NeoPixel by Adafruit (current version 1.0.6) 

## Run examples from ESPert
- Open Arduino IDE, try examples of ESPert library

