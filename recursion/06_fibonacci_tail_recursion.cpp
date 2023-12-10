#include <iostream>

using namespace std;

// (1,1,2,3,5,8,13,21,34,55,89,144)
// Head recursion is not the best solution possible 
// because after the base case we have to backtrack
// We can transform the head recursion into tail recursion
// Just have to use additional parameters (accumulators)
long fibonacciTail (long number, long accumulator1, long accumulator2)
{
  if (number == 0)  return accumulator1;
  if (number == 1) return accumulator2;
 
  else {
    return fibonacciTail (number - 1,accumulator2, accumulator1 + accumulator2);     
  }
  
}

int main ()
{

        
  cout << "Finobbacci sequence: " << fibonacciTail (3,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (4,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (10,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (11,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (12,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (13,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (1000,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (500,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail(500,0,1) + fibonacciTail(501,0,1) << endl;
  cout << "Finobbacci sequence: " << fibonacciTail (502,0,1) << endl;
  

  return 0;
}
