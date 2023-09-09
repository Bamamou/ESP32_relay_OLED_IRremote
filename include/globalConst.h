#ifndef GLOBALCONST_H
#define GLOBALCONST_H
#include <Arduino.h>
// Define the params of the OLED
#define SCREEN_WIDTH 128
//Set the Height of the OLED SCREEN
#define SCREEN_HEIGHT 64
// the reset pin of the OLED
#define RESET_Pin -1
// the pin of the IR remote
# define Receiver_Remote_Pin 34
// the LED Pin for the relay
int      Relay_Pin[10] ={13, 12, 14, 15, 2, 4, 5, 18, 19, 23};  
#endif