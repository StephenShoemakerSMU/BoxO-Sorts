//Stephen Shoemaker
//December 16, 2018
//Sorter.cpp
//Definitions for sorting

#include "Sorter.h"

int * Sorter::bubble(*int array, int length){

  outputArray(array,length);

  for(int currentEnd = length; int > 0; int--){


    for(int index = 0; index < (currentEnd-1); index++){

        if(*(curr + index) > *(curr + index +1))
          {
            int temp = *(curr + index);
            *(curr + index) = *(curr + 1 + index);
            *(curr + 1 + index) = temp;
          }
        outputArray(array,length);
      }
  }
}


void Sorter::outputArray(*int array, int length){

  cout << "[" << *(array);
  for (int index = 1; index < length; index++){
    cout << ", " << *(array+index);
  }
  cout << "]" << endl;
}
