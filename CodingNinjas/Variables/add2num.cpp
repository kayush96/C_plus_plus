#include <iostream>
using namespace std;

int main()
{
  //Integer
  int a, b, sum = 0;
  a = 10;
  b = 20;
  sum = a + b;
  cout << "Sum is: " << sum << endl;
  //Character
  char d = 'x';
  cout << d << endl;
  //FloatingPoint
  float f = 1.25;
  //Boolean
  bool ab = true;

  int size = sizeof(f);
  cout << size;
  return 0;
}
