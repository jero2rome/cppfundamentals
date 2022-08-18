#include "cppfundamentals.h"

using namespace std;

int main()
{
  // Data types size and limits
  int number = numeric_limits<int>::max();
  number++;
  // overflowing, if we increment the max value of int, it will go to min value of int
  cout << "overflowing " << number << endl;

  number = numeric_limits<int>::min();
  number--;
  // underflowing, if we decrement the min value of int, it will go to max value of int
  cout << "underflowing " << number << endl;

  cout << numeric_limits<int>::min() << endl
    << numeric_limits<int>::max() << endl;

  cout << sizeof(int);

  cout << endl;

  // fixed is a sticky manipulator
  cout << fixed << setprecision(2) << 12.34567;

  cout << endl;

  // left is a sticky manipulator, its applied to everything that follows a sticky manipulator,
  // you need to change it back if you want to change it. Ex: Apply "right" manipulator to change to right align.
  // right is the default setting
  cout << left;
  cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
    << setw(10) << "Summer" << setw(10) << "Hot";

  // "<<" Stream insertion operator
  // ">>" Stream extraction operator
  cout << right;
  cout << "Hello world" << endl;

  return 0;
}
