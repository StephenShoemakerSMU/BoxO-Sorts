//Stephen Shoemaker
//December 16, 2018
//Sorter.h
//This is my attempt to replicate every sort algorithim I can find without looking
//directly at code.
//This is the header for a class filled with static functions that sort things in different ways.e

#ifndef SHOESORT
#define SHOESORT
#include <iostream>

using namespace std;

class Sorter{
  public:
    static void bubble(int * , int);
    static void selection(int*, int);
  private:
    static void outputArray(int *, int);
};


#endif
