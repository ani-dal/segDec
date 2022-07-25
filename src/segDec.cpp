#include "segDec.h"
/*
SEG::SEG(int a,int b,int c,int d,int e,int f,int g,int dec,int mode){
    _mode = mode;
    _a = a;
    _b = b;
    _c = c;
    _d = d;
    _e = e;
    _f = f;
    _g = g;
    _segPins[7] = {_a,_b,_c,_d,_e,_f,_g};
    pinMode(dec,OUTPUT);
    for (int c = 0; c<7;c++){
        pinMode(_segPins[c],OUTPUT);
    }
}
*/
SEG::SEG(int a,int b,int c,int d,int e,int f,int g,int mode){
    _mode = mode;
   
    
    _segPins[0] = a;
    _segPins[1] = b;
    _segPins[2] = c;
    _segPins[3] = d;
    _segPins[4] = e;
    _segPins[5] = f;
    _segPins[6] = g;
    for (int c = 0; c<7;c++){
        pinMode(_segPins[c],OUTPUT);
    }
   
}
/*
This DAMN Method does not work
SEG::SEG(int segPins[7],int dec,int mode){
    pinMode(dec,OUTPUT);
   _mode = mode;
    for (int c = 0; c<7;c++){
        pinMode(segPins[c],OUTPUT);
    }
    _a = segPins[0];
    _b = segPins[1];
    _c = segPins[2];
    _d = segPins[3];
    _e = segPins[4];
    _f = segPins[5];
    _g = segPins[6];
    _segPins[7] = {_a,_b,_c,_d,_e,_f,_g};
}

SEG::SEG(int segPins[7],int mode){
    _mode = mode;
    for (int c = 0; c<7;c++){
        pinMode(segPins[c],OUTPUT);
    }
    _a = segPins[0];
    _b = segPins[1];
    _c = segPins[2];
    _d = segPins[3];
    _e = segPins[4];
    _f = segPins[5];
    _g = segPins[6];
    _segPins[7] = {_a,_b,_c,_d,_e,_f,_g};
    
}
*/

void SEG::display(int _n){
    
    for (int i = 0; i <7; i++)
{
  digitalWrite(_segPins[i],_mode?(seg[_n][i]?HIGH:LOW):(seg[_n][i]?LOW:HIGH));
}

}

void SEG::clear(){
     for (int i = 0; i <7; i++){
        digitalWrite(_segPins[i],_mode?(LOW):(HIGH));
    }

}

void SEG::countUp(int n){
    
    for (int j = 0;j<=n;j++){
        display(j);
        delay(1000);
        clear();
    }
}

void SEG::countUp(int n,int del){
    
    for (int j = 0;j<=n;j++){
        display(j);
        delay(del);
        clear();
    }
}

void SEG::countDown(int n){
    
    for (int j = n;j>=0;j--){
        display(j);
        delay(1000);
        clear();
    }
}

void SEG::countDown(int n, int del){
    
    for (int j = n;j>=0;j--){
        display(j);
        delay(del);
        clear();
    }
}

void SEG::countup(int v, int m){
    
    if(m>v){
        _s = v;
        _l = m;
    }
    else if(m<v){
        _s = m;
        _l = v;
    }
    for (int j =_s ;j<=_l;j++){
            display(j);
            delay(1000);
            clear();
        }
}

void SEG::countup(int v, int m, int del){
    
    if(m>v){
        _s = v;
        _l = m;
    }
    else if(m<v){
        _s = m;
        _l = v;
    }
    for (int j =_s ;j<=_l;j++){
            display(j);
            delay(del);
            clear();
        }
}

void SEG::countdown(int v, int m){
    
    if(m>v){
        _s = v;
        _l = m;
    }
    else if(m<v){
        _s = m;
        _l = v;
    }
    for (int j =_l ;j>=_s;j--){
            display(j);
            delay(1000);
            clear();
        }
}    

void SEG::countdown(int v, int m, int del){
    
    if(m>v){
        _s = v;
        _l = m;
    }
    else if(m<v){
        _s = m;
        _l = v;
    }
    for (int j =_l ;j>=_s;j--){
            display(j);
            delay(del);
            clear();
        }
}    