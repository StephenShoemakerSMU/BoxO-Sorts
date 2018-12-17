#include "Sorter.h"

#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  int length = 20;
  int range = 20;
  int * array = &(0);
  srand(std::time(nullptr));

  for(int index = 0; index < length; index++){
      *(array+index) = 1 + rand()%range;
  }

  Sorter.bubble(array,length);

}
