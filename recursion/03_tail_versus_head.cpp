#include <iostream>

using namespace std;

void
tailRecursion (int number)
{
  // defines the base case
  if (number == 0)
    return;

  // do some operations
  cout << "Tail function called with number=" << number << endl;

  // recursion
  tailRecursion (number - 1);
}

void
headRecursion (int number)
{

  if (number == 0)
    return;

  // recursion
  headRecursion (number - 1);

  // do some operations
  cout << "Head function called with number=" << number << endl;
}


int
main ()
{

  cout << "Tail recursion" << endl;
  cout << " similar to a ITERATION." << endl;
  cout << " the recursive function occurs at the end of the function." <<
    endl;
  cout << " similar to a while or a for loop." << endl;
  cout <<
    " executes all the statements before jumping to the next recursive call."
    << endl;

  cout << "Head recursion" << endl;
  cout << " the recursive function call occurs at the begin of the function."
    << endl;
  cout <<
    " This approach saves the state of the function call befores jumping into the next recursive call."
    << endl;
  cout << " Needs MORE MEMORY because stores the states.\n" << endl;


  tailRecursion (10);
  cout << "\n";
  headRecursion (10);




}
