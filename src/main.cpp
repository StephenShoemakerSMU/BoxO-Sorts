#include "Sorter.h"

#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  //int length = 10;
  int range = 20;
//  int * selectionArray = new int[length];
//  int * bubbleArray = new int[length];
  srand(std::time(nullptr));

  for(int length = 100; length  < 10000; length *=1.1){
    int * selectionArray = new int[length];
    int * bubbleArray = new int[length];
    for(int index = 0; index < length; index++){
        int value = 1 + rand()%range;
        *(selectionArray+index) = value;
        *(bubbleArray+index) = value;
    }

    Sorter::selection(selectionArray,length);
    Sorter::bubble(bubbleArray,length);
  }

}
