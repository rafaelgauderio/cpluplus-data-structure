#include <iostream>

using namespace std;

int iteration (int number);
int recursion (int number);

int
main ()
{

  cout << "Recursion\n" << endl;
  cout <<
    " Method where the solution to a problem dependes on solutuin to smaller instances to the same problema."
    << endl;
  cout << " Breaks the tasks into smaller and smaller subtasks" << endl;
  cout << " Necessary ti define base-cases to AVOID INFINITE LOOPS" << endl;
  cout <<
    " Every problem can be solved withe iteration (tail recursion) or with recursion"
    << endl;

  cout << iteration (10) << endl;	// 55
  cout << recursion (10) << endl;	// 55
}

int
iteration (int number)
{
  int result = 0;
  for (int i = 0; i <= number; i++)
    {
      result = result + i;
    }
  return result;
}

int
recursion (int number)
{
  // base case to avoid INFINITE LOOPS
  if (number == 0)
    {
      return 0;
    }
  return number + recursion (number - 1);
}
