#include "segDec.h"

int segPins[7] = {2,3,4,6,7,8,9};

SEG 7SEG(segPins[],1);

byte num;
int n;
void setup(){
    Serial.begin(9600);
}

void loop(){
    if(Serial.available()){
        num = Serial.read();
        if (num >= 0x0 && num <= 0xf ) n = num;

        7SEG.clear();
    }

    7SEG.display(n);
    delay(100);
}