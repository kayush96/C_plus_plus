#include <iostream>
using namespace std;
int main()
{
  int num, sum = 0;
  cout << "Enter the value of N: " << endl;
  cin >> num;
  while (num > 0)
  {
    sum += num;
    num--;
  }
  cout << "Total sum: " << sum << endl;
  return 0;
}
