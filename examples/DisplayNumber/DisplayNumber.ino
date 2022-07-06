#include "segDec.h"

int segPins[7] = {2,3,4,6,7,8,9};

SEG SEG7(segPins[],1);

byte num;
int n;
void setup(){
    Serial.begin(9600);
}

void loop(){
    if(Serial.available()){
        num = Serial.read();
        if (num >= 0x0 && num <= 0xf ) n = num;

        SEG7.clear();
    }

    SEG7.display(n);
    delay(100);
}