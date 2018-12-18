#include "Sorter.h"

#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int length = 10;
  int range = 20;
  int * array = new int[length];
  srand(std::time(nullptr));

  for(length = 100; length  < 10000; length *=1.1){
    int * array = new int[length];
    for(int index = 0; index < length; index++){
        *(array+index) = 1 + rand()%range;
    }

    Sorter::bubble(array,length);
  }

}
