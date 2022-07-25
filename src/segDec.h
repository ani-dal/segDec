#ifndef segDec_h
#define segDec_h


#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
	#include <pins_arduino.h>
#endif


class SEG{
  public:
    SEG(int,int,int,int,int,int,int,int,int);//pins, dot, mode
    SEG(int,int,int,int,int,int,int,int); // pins, mode
    SEG(int[],int,int);// pins, dot, mode
    SEG(int[],int);//pins, mode

    void clear();
    void display(int);
    void countUp(int);
    void countDown(int);
    void countup(int,int);
    void countdown(int,int);

    void countUp(int,int);
    void countDown(int,int);
    void countup(int,int,int);
    void countdown(int,int,int);


 private:
   
  
  int _segPins[7];
  int _mode;

 
    int _s,_l;

int  seg [16][7] = {{1,1,1,1,1,1,0}, //0
                    {0,1,1,0,0,0,0}, //1
                    {1,1,0,1,1,0,1}, //2
                    {1,1,1,1,0,0,1}, //3
                    {0,1,1,0,0,1,1}, //4
                    {1,0,1,1,0,1,1}, //5
                    {1,0,1,1,1,1,1}, //6
                    {1,1,1,0,0,0,0}, //7
                    {1,1,1,1,1,1,1}, //8
                    {1,1,1,1,0,1,1}, //9
                    {1,1,1,0,1,1,1}, //A
                    {0,0,1,1,1,1,1}, //b
                    {1,0,0,1,1,1,0}, //C
                    {0,1,1,1,1,0,1}, //d
                    {1,0,0,1,1,1,1}, //E
                    {1,0,0,0,1,1,1}, //F
                    };



};
#endif