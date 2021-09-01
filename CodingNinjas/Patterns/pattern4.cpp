#include <iostream>
using namespace std;

int main()
{
  int i = 1, num, curr = 1;
  cout << "Enter the value of N: " << endl;
  cin >> num;
  int val = 1;
  while (i <= num)
  {
    val = curr;
    int j = 1;
    while (j <= i)
    {
      cout << val;
      curr = val;
      val++;
      j++;
    }
    i++;
    cout << endl;
  }
}
