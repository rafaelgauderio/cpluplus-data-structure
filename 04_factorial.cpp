#include <iostream>

using namespace std;

int factorial (int number) {
    if (number ==0) {
        cout << "This the base case to avoid infinete loop: " << number << endl;
        return 1;
    }
    
    cout << "Before recursion: " << number << endl;
    int result = number * factorial(number-1);
    cout << "After recursion: " << result << endl;
    
    return result;
}

int main () {
    cout << "Factorial with head recursion" << endl;
    cout << factorial(4) << "\n" << endl;
    cout << factorial(5) << "\n" << endl;
    return 0;
}
