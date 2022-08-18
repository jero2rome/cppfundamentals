#include "cppfundamentals.h"

using namespace std;

int main()
{
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
