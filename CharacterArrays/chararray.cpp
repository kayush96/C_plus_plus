#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char arr[] = "abcdef"; //{'a', 'b', 'd', 'c', '\0'};
  cout << arr << endl;

  cout << strlen(arr) << endl;
  cout << sizeof(arr) << endl;
  return 0;
}
