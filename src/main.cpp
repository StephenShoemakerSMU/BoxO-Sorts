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

  //for(int length = 10; length  < 100; length +=10){
  //  int * selectionArray = new int[length];
  //  int * bubbleArray = new int[length];
    int * insertionArray = new int[100];
    for(int index = 0; index < 100; index++){
        int value = 1 + rand()%range;
    //    *(selectionArray+index) = value;
    //    *(bubbleArray+index) = value;
        *(insertionArray+index) = value;
    }

  //  Sorter::selection(selectionArray,length);
  //  Sorter::bubble(bubbleArray,length);
    Sorter::insertion(insertionArray,100);


}
