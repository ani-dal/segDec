#include "segDec.h"

int segPins[7] = {2,3,4,6,7,8,9};

SEG SEG7(segPins[],1);

void setup(){
   
}

void loop(){
   SEG7.countDown(10);
}

