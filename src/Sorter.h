//Stephen Shoemaker
//December 16, 2018
//Sorter.h
//This is my attempt to replicate every sort algorithim I can find without looking
//directly at code.
//This is the header for a class filled with static functions that sort things in different ways.e

#ifndef SHOESORT
#define SHOESORT
#include <iostream>
#include <chrono>
using namespace std;

class Sorter{
  public:
    static void bubble(int * , int);
    static void selection(int*, int);
    static void insertion(int*, int);
    //static auto bubbleTime(int*, int);
    //static auto selectionTime(int*, int);
    //static auto insertionTime(int*, int);
  private:
    static void outputArray(int *, int);
    static void checkArray(int *, int);
};


#endif
