#include <segDec.h>

#define MODE 1 // 1 -> common Cathode/GND; 0 -> common Anode/Vcc
#define DELAY 1000 // by default the delay is set to 1sec, the functions can overloade to a custom delay.


int a = 30;
int b = 31;
int c = 32;
int d = 33;
int e = 34;
int f = 35;
int g = 36;

SEG SEG7(a,b,c,d,e,f,g,MODE);

void setup(){
   
}

void loop(){
   SEG7.countDown(15,DELAY);
   delay(100);
   SEG7.countUp(15,DELAY);
   delay(100);
}

