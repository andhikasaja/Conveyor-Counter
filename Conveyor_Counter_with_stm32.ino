
/*
  The circuit:
* 5V to Arduino 5V pin
* GND to Arduino GND pin
* CLK to Analog #5
* DAT to Analog #4
*/


#include <Wire.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
byte ldr= A1;
int  nilai;
int things;
int count=0;

void setup(){
//  LCD Begin;
lcd.begin(16,4);

Serial.begin(9600);
}

void loop(){
nilai= analogRead(ldr);
  
if (nilai > 400) {
      count++; 
      }

lcd.setCursor(0,1);
Serial.print("Jumlah Barang: ");
lcd.setCursor(0,2);
Serial.println(count);
Serial.print("intensitas cahaya: ");
delay(1000);
  
}
