//Stephen Shoemaker
//December 16, 2018
//Sorter.cpp
//Definitions for sorting

#include "Sorter.h"
#include <chrono>

void Sorter::bubble(int * array, int length){

  //outputArray(array,length);
  auto start = chrono::high_resolution_clock::now();
  for(int currentEnd = length; currentEnd > 0; currentEnd--){
    int* curr = array;
    for(int index = 0; index < (currentEnd-1); index++){

        if(*(curr + index) > *(curr + index +1))
          {
            int temp = *(curr + index);
            *(curr + index) = *(curr + 1 + index);
            *(curr + 1 + index) = temp;
          }
        //outputArray(array,length);
      }
  }
  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
  //outputArray(array,length);


  cout << "Bubble Sorted " << length << " elements in ";
  cout << duration.count();
  cout << " ms" << endl;

}


void Sorter::outputArray(int * array, int length){

  cout << "[" << *(array);
  for (int index = 1; index < length; index++){
    cout << ", " << *(array+index);
  }
  cout << "]" << endl;
}
