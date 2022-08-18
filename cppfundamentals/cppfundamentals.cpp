#include "cppfundamentals.h"

using namespace std;

int main()
{
  // working with arrays

  int numbers[5]{};
  cout << numbers[2] << endl;

  // Still compiles and prints garbage if accessing out of bounds
  cout << numbers[5] << endl;

  int otherNumbers[5] = {10, 20};
  cout << otherNumbers[1] << endl;
  cout << otherNumbers[2] << endl;

  int anotherNumbers[] = { 10, 20 };

  // will print garbage since anotherNumbers[2] is out of bounds
  cout << anotherNumbers[2] << endl;

  string names[3];

  cout << "Name 1:";
  getline(cin, names[0]);

  cout << "Name 2:";
  getline(cin, names[1]);

  cout << "Name 3:";
  getline(cin, names[2]);

  cout << names[0] << endl;

  // working with strings

  string fullname;
  cout << "Enter both your first name and last name: " << endl;
  // ignore anything entered before user input, in this case endl.
  cin.ignore();
  // getline to read a line from the input stream
  getline(cin, fullname);
  cout << "Hi " << fullname << endl;

  string name;
  cout << name << endl;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Hi " << name << endl;

  // working with characters

  char ch = 'a';
  cout << ch << endl;
  cout << +ch << endl;

  ch = 'b';
  cout << +ch << endl;
  ch = 98;
  cout << ch << endl;

  // working with booleans
  bool isNewUser = false;
  // sticky manipulator boolalpha to print "true" or "false" instead of "1" or "0
  cout << boolalpha << isNewUser;
  cout << noboolalpha;

  cout << endl;

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
