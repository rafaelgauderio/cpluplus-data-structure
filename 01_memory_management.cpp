#include <iostream>

using namespace std;

int main () {
    
    cout << "Memory Management\n" <<  endl;
    cout << "Ram\n Memory use to run the applications\n has three part:" << endl;
    cout << " heap, stack and machine code" << endl;
    
    cout << "machine code: where de code of the application is located. " << endl;
    
    cout << "stack\n local variables and method (functions) calls \n reference variables that pointing to object on th heap memory " << endl;
	cout << " how the programming language knows where to return after finish execution of a given method " << endl;
	cout << " small in size, fast access, no fragmentation.1" << endl;
	
	cout << "heap" << endl;
	cout << " dynamic memory allocation takes place here. Functions like malloc, realloc" << endl;
	cout << " larger size than the stack memory" << endl;
	cout << " objects and reference types are store on the heap memory" << endl;
	cout << " large in size, slow to access, has fragmentation (have to free the alocate memory)" << endl;
	cout << " In c++ whe have to remove the objects manually when there are no more active references pointing to them" << endl;
}


