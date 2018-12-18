//Stephen Shoemaker
//December 16, 2018
//Sorter.cpp
//Definitions for sorting

#include "Sorter.h"
#include <chrono>

//My bubble sort
void Sorter::bubble(int * array, int length){

  //outputArray(array,length);

  //starting clock
  auto start = chrono::high_resolution_clock::now();

  //outer loop that puts the highest value at the end of the array
  for(int currentEnd = length; currentEnd > 0; currentEnd--){

    //starting at beginning of array
    int* curr = array;

    //swapping every pair of values so the highest value is on the higher index
    for(int index = 0; index < (currentEnd-1); index++){

        //If the current index is greater
        if(*(curr + index) > *(curr + index +1))
          {
            //swapping the values
            int temp = *(curr + index);
            *(curr + index) = *(curr + 1 + index);
            *(curr + 1 + index) = temp;
          }
      }
  }


  //stopping clock
  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);


  //outputting time
  cout << "Bubble Sorted " << length << " elements in ";
  cout << duration.count();
  cout << " ms" << endl;

}

void Sorter::selection(int* array, int length){

  //outputArray(array,length);

  //starting clock
  auto start = chrono::high_resolution_clock::now();

  //new array


  for(int startIndex = 0; startIndex < length; startIndex++){
    //the partition value of the current array
    int * lowestIndex = (array+startIndex);

    for(int currentIndex = startIndex; currentIndex < length; currentIndex++){
        if(*(lowestIndex) > *(array+currentIndex)){
          lowestIndex = array+currentIndex;
        }
    }

    int temp = *(array+ startIndex);
    *(array + startIndex) = *(lowestIndex);
    *(lowestIndex) = temp;
    //outputArray(array,length);
  }



  //stopping clock
  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

  //outputting time
  cout << "Selection Sorted " << length << " elements in ";
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
