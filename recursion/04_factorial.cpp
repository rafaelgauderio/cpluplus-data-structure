#include <iostream>

using namespace std;

int factorial (int number) {
    if (number ==0) {
        cout << "This is the base case to avoid infinite loop: " << number << endl;
        return 1;
    }
    
    cout << "Before recursion: " << number << endl;
    int result = number * factorial(number-1);
    cout << "After recursion: " << result << endl;
    
    return result;
}

int factorialTail (int number, int accumulator) {
    if (number==0) {
        cout << "This is the base case to avoid infinite loop: " << accumulator << endl; 
        //we kwnow the final value whenever we hit the base case
        // there is no need for backtracking operations
        return accumulator;
    }
    
    cout << "Before recursion: " << number << endl;
    int result = factorialTail(number-1, number * accumulator);
    cout << "After recursion: " << result << endl;
    
    return result;
}

int main () {
    cout << "Factorial with head recursion" << endl;
    cout << factorial(4) << "\n" << endl;
    cout << factorial(5) << "\n" << endl;
    
    cout<< "\nFactorial with tails recursion (use less memory)" << endl;
    cout << factorialTail(4,1) << "\n" << endl;
    cout << factorialTail(5,1) << "\n" << endl;
    cout << factorialTail(6,1) << "\n" << endl;
    
    return 0;
}
