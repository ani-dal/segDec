#include <segDec.h>

#define MODE 1 // 1 -> common Cathode/GND; 0 -> common Anode/Vcc

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
    SEG7.display(10);
    delay(100);
    SEG7.clear();
    delay(100);
}