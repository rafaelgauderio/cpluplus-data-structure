#include <iostream>

using namespace std;

void linearSearch(int array[], int numberOfItens, int item) {
    bool find = false;
    for(int i=0; i< numberOfItens; i++) {
        if (array[i]==item) {
            find = true;
            cout << "Item found at index: " << i << endl;
            break;
        } else {
            find = false;
        }
    }
    if (find ==false) {
        cout << "Item does not belong to the respective array!" << endl;
    }
}

int main()
{
    
    cout << "Sequencial search is a method for finding an item in an UNSORTED LIST.\n" << endl;
    // makes N comparisons in worst case
    // running time complexity is O(N)
    int array[] = {1,4,7,12,-4,10,12,60,-5,22};
    int size = sizeof(array)/sizeof(array[0]);
    
    linearSearch(array,size,1);
    linearSearch(array,size,7);
    linearSearch(array,size,-4);
    linearSearch(array,size,500);
    linearSearch(array,size,22);
    
    return 0;
}

