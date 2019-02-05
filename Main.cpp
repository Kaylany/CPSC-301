#include <iostream>
#include <vector>
#include "ReverseArray.h"

using namespace std;

int main()
{
  int array[] = {1, 2, 3, 4, 5, 6};
  cout << "Array is " << endl;
  printArray(array, 6);
  reverseArray(array, 0, 5);
  cout << endl;
  cout << "Reversed array is " << endl;
  printArray(array, 6);
  cout << endl;
}
