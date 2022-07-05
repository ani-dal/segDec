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
    SEG(int,int,int,int,int,int,int,int,int); // pins, dot, mode
    SEG(int,int,int,int,int,int,int,int); // pins, mode
    SEG(int[],int,int); // pin array, dot, mode
    SEG(int[],int); // pin array, mode
    void clear();
    void display(int);
    void countUp(int);
    void countDown(int);
    void countUp(int,int);
    void countDown(int,int);


 private:
    int _a,_b,_c,_d,_e,_f,_g,dec; 

    int _mode;// common cathode(grnd) ->1 
              // common anode(vcc) ->0

    int _segPins [7];
    int _n,_s,_l;

    byte seg [16][7] = {{1,1,1,1,1,1,0}, //0
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