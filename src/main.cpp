#include "Sorter.h"

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <chrono>
using namespace std;

int main(){
  //int length = 10;
  int range = 1000;
//int * selectionArray = new int[length];
//  int * bubbleArray = new int[length];
  srand(std::time(nullptr));
  std::ofstream dataFile;
  dataFile.open("SortData.csv");
  dataFile << "Sort Data" << endl;
  dataFile << "Num Elements,Selection Sort,Bubble Sort,Insertion Sort" << endl;
  for(int length = 10; length  < range; length +=10){
    int * selectionArray = new int[length];
    int * bubbleArray = new int[length];
    int * insertionArray = new int[length];
    for(int index = 0; index < length; index++){
        int value = 1 + rand()%range;
        *(selectionArray+index) = value;
        *(bubbleArray+index) = value;
        *(insertionArray+index) = value;
    }

    dataFile << length;

    auto start = chrono::high_resolution_clock::now();

    Sorter::bubble(bubbleArray,length);

    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    dataFile << ",";
    dataFile << duration.count();

    start = chrono::high_resolution_clock::now();

    Sorter::selection(selectionArray,length);

    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    dataFile << ",";
    dataFile << duration.count();

    start = chrono::high_resolution_clock::now();

    Sorter::insertion(insertionArray,length);

    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    dataFile << ",";
    dataFile << duration.count();
    dataFile << endl;


    delete selectionArray;
    delete bubbleArray;
    delete insertionArray;


  }


  dataFile.close();
}
