

SEG::SEG(int a,int b,int c,int d,int e,int f,int g,int dec,int mode){
    _mode = mode;
    _segPins[7] = {a,b,c,d,e,f,g};
    pinMode(dec,OUTPUT);
    for (int c = 0; c<7;c++){
        pinMode(_segPins[c],OUTPUT);
    }
}

SEG::SEG(int a,int b,int c,int d,int e,int f,int g,int mode){
    _mode = mode;
    _segPins[7] = {a,b,c,d,e,f,g};
    for (int c = 0; c<7;c++){
        pinMode(_segPins[c],OUTPUT);
    }
}

SEG::SEG(int segPins[7],int dec,int mode){
    _mode = mode;
    pinMode(dec,OUTPUT);
    _segPins[7] = segPins[7];
    for (int c = 0; c<7;c++){
        pinMode(_segPins[c],OUTPUT);
    }
}

SEG::SEG(int segPins[7],int mode){
    _mode = mode;
    _segPins[7] = segPins[7];
    for (int c = 0; c<7;c++){
        pinMode(_segPins[c],OUTPUT);
    }
}



void SEG::display(int n){
    _n = n;
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

void SEG::countDown(int n){
    
    for (int j = n;j>=0;j--){
        display(j);
        delay(1000);
        clear();
    }
}

void SEG::countUp(int v, int m){
    
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

void SEG::countDown(int v, int m){
    
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