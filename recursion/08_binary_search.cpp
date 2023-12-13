#include <iostream>

using namespace std;


int binarySearch (int array[], int lower, int higher, int item ) {
    // item do not find in the array
    if(lower > higher) {
        return -1;
    }
    // to avoid overflow
    int middle = lower + (higher - lower) / 2;
    
    // we find the item
    if(array[middle] == item) {
        return middle;
    }
    
    if(item < array[middle]) {
        // check the sub-array in the left side, tail recursion
        return binarySearch(array, lower, middle-1, item);
    } else {
        //check the sub-array in the right side, tail recursion
        return binarySearch(array, middle+1, higher, item);
    }
}
 void binarySearchMessage(int array[], int low, int high, int item, int(*function)(int[],int,int,int)) {
     if(function(array, low, high,item)==-1) {
         cout << "Element do not find in the respective array." << endl; 
     } else {
         cout << "Index: " << function(array,low,high,item) << endl;
     }
 }


int main()
{
    cout << "Binary search (logarithmic search) is a method for findind an item in an SORTED LIST." << endl;
    // running time complexity is O(logN)
    
    int sortedArray [] = {1,2,4,5,7,9,12,14,15,20,24,50,80,98,100};
    int size = sizeof(sortedArray)/sizeof(sortedArray[0]);
    int higherIndex = size -1; // because start on index zero;
    int lowerIndex=0;
    
    
    
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 1) << endl;
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 4) << endl;
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 13) << endl;
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 20) << endl;
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 98) << endl;
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 99) << endl;
    cout << "Index: " << binarySearch(sortedArray, lowerIndex, higherIndex, 100) << endl;
    binarySearchMessage(sortedArray,lowerIndex,higherIndex,100,&binarySearch);
    binarySearchMessage(sortedArray,lowerIndex,higherIndex,200,&binarySearch);
    binarySearchMessage(sortedArray,lowerIndex,higherIndex,80,&binarySearch);
    
    
    


    return 0;
}
