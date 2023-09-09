//How to draw points and figures on an OLED Screen.
//First include this libs

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include<IRremote.h>
// Define the params of the OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define RESET_Pin -1
# define Receiver_Remote_Pin 34
int      Relay_Pin[10] ={13, 12, 14, 15, 2, 4, 5, 18, 19, 23};

Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, RESET_Pin); //Attach the OLED


void setup() {
  // put your setup code here, to run once:
  // We setup the OLED 
  Serial.begin(115200);
  IrReceiver.begin(13, ENABLE_LED_FEEDBACK); // Start the receiver
  OLED.begin(SSD1306_SWITCHCAPVCC, 0x3C);   // Set the address of the OLED at 0x3C
  OLED.clearDisplay();  // Clear everything before the code
  for (int pin = 0; pin <10 ; pin++) {  
    pinMode( Relay_Pin[pin], OUTPUT);  
    // here, we have used for loop for initialization  
   }
  pinMode(Relay_Pin[1], OUTPUT);
  // oled.begin(128, 64, sizeof(tiny4koled_init_128x64br), tiny4koled_init_128x64br);
  OLED.clearDisplay();
  OLED.setTextSize(1.5);
  OLED.setTextColor(WHITE);
  OLED.setCursor(0, 10);
  // Display static text
  OLED.println(F("Press a number"));
  OLED.setCursor(0, 40);
  OLED.println("To trigger a relay");
  OLED.display(); 
}

void loop() {
  // put your main code here, to run repeatedly:
 
   if (IrReceiver.decode()) {
     // Serial.println(results.value, HEX); // Print "old" raw data
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0XF0DB1AE0){
       for(int i =0; i<10; i++){
         if(digitalRead( Relay_Pin[i])==0){
            digitalWrite( Relay_Pin[i], HIGH);
            OLED.clearDisplay();
            OLED.setTextSize(2);
            OLED.setTextColor(WHITE);
            OLED.setCursor(15, 15);
            OLED.println("All ON!");
            OLED.display();
         }
        else if(digitalRead( Relay_Pin[i])==1){
           digitalWrite( Relay_Pin[i], LOW);
            OLED.clearDisplay();
            OLED.setTextSize(2);
            OLED.setTextColor(WHITE);
            OLED.setCursor(15, 15);
            OLED.println("All OFF!");
            OLED.display();
         }
       }
  // Button 0 
      }
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0xE39FAC1B){  
       
          if(digitalRead( Relay_Pin[0])==0){
            digitalWrite( Relay_Pin[0], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[0])==1){
            digitalWrite( Relay_Pin[0], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      // Button 1
      }
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X6B7832FF){  
        
          if(digitalRead( Relay_Pin[1])==0){
            digitalWrite( Relay_Pin[1], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[1])==1){
            digitalWrite( Relay_Pin[1], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
      // Button 2
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X3D9AE3F7){
      
          if(digitalRead( Relay_Pin[2])==0){
            digitalWrite( Relay_Pin[2], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[2])==1){
            digitalWrite( Relay_Pin[2], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
      //Button Number 3
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X31C5DD7B){
        if(digitalRead( Relay_Pin[3])==0){
            digitalWrite( Relay_Pin[3], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[3])==1){
            digitalWrite( Relay_Pin[3], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
  // Button Number 4
     
       if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X45473C1B){
       if(digitalRead( Relay_Pin[4])==0){
            digitalWrite( Relay_Pin[4], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[4])==1){
            digitalWrite( Relay_Pin[4], LOW);
            //Turn OFF and Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
  // Button Number 5
       if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X63CBDADB){
      
        if(digitalRead( Relay_Pin[5])==0){
            digitalWrite( Relay_Pin[5], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Turn Off and draw an empty circle
          else if(digitalRead( Relay_Pin[5])==1){
            digitalWrite( Relay_Pin[5], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
       }
      // Button number 6
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X449E79F){

        if(digitalRead( Relay_Pin[6])==0){
            digitalWrite( Relay_Pin[6], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[6])==1){
            digitalWrite( Relay_Pin[6], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }

      }
  // Button Number 7  
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X32C6FDF7){
       if(digitalRead( Relay_Pin[7])==0){
            digitalWrite( Relay_Pin[7], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[7])==1){
            digitalWrite( Relay_Pin[7], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
  // Button Number 8
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X3EC3FC1B){
       if(digitalRead( Relay_Pin[8])==0){
            digitalWrite( Relay_Pin[8], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[8])==1){
            digitalWrite( Relay_Pin[8], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
  // Button Number 9
      if((IrReceiver.decodedIRData.decodedRawData, HEX)==0X1BC0157B){
       if(digitalRead( Relay_Pin[9])==0){
            digitalWrite( Relay_Pin[9], HIGH);
            // Draw a filled circle
            OLED.clearDisplay();
            OLED.fillCircle(64, 32, 20, WHITE);
            OLED.display();
          }
         // Draw a single white pixel at (x, y)
          else if(digitalRead( Relay_Pin[9])==1){
            digitalWrite( Relay_Pin[9], LOW);
            // Draw an empty circle
            OLED.clearDisplay();
            OLED.drawCircle(64, 32, 20, WHITE);
            OLED.display();
          }
      }
      
/*
 // The Foward Button
      if(results.value==0X23FCB924){
      
         if(digitalRead( Relay_Pin[0])==0){
            digitalWrite( Relay_Pin[pin++], HIGH);
            OLED.clearDisplay();
            OLED.setTextSize(2);
            OLED.setTextColor(WHITE);
            OLED.setCursor(15, 15);
            OLED.println("All ON!");
            OLED.display();
         }
        else if(digitalRead( Relay_Pin[pin])==1){
           digitalWrite( Relay_Pin[pin++], LOW);
            OLED.clearDisplay();
            OLED.setTextSize(2);
            OLED.setTextColor(WHITE);
            OLED.setCursor(15, 15);
            OLED.println("All OFF!");
            OLED.display();
         }
       
      }

 // Backwrd button      
     if(results.value==0X710E7FC0){
      
         if(digitalRead( Relay_Pin[])==0){
            digitalWrite( Relay_Pin[pin--], HIGH);
            OLED.clearDisplay();
            OLED.setTextSize(2);
            OLED.setTextColor(WHITE);
            OLED.setCursor(15, 15);
            OLED.println("All ON!");
            OLED.display();
         }
        else if(digitalRead( Relay_Pin[pin])==1){
           digitalWrite( Relay_Pin[pin--], LOW);
            OLED.clearDisplay();
            OLED.setTextSize(2);
            OLED.setTextColor(WHITE);
            OLED.setCursor(15, 15);
            OLED.println("All OFF!");
            OLED.display();
         }
       
      }

*/

       IrReceiver.resume(); // Enable receiving of the next value
   }

}
