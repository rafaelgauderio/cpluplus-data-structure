#include <iostream>

using namespace std;

// (1,1,2,3,5,8,13,21,34,55,89,144)
// it is not the best solution
int fibonacciHead (int number)
{
  if (number == 0)  return 0;
  if (number == 1) return 1;
 
  else {
    return fibonacciHead (number - 1) + fibonacciHead (number - 2);    
  }
  
}

int main ()
{

        
  cout << "Finobbacci sequence: " << fibonacciHead (3) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (4) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (5) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (6) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (7) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (8) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (9) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (10) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (11) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (12) << endl;
  cout << "Finobbacci sequence: " << fibonacciHead (13) << endl;
  // it will take a while to calculate the 200 number of que sequence
  cout << "Finobbacci sequence: " << fibonacciHead (200) << endl;
  

  return 0;
}