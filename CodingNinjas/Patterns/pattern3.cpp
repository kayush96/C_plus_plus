#include <iostream>
using namespace std;

int main()
{
  int i = 1, n;
  cout << "Enter the value of n: " << endl;
  cin >> n;
  int val = 1;
  while (i <= n)
  {
    int k = 1;
    while (k <= n - i)
    {
      cout << " ";
      k++;
    }
    int j = 1;
    while (j <= i)
    {
      cout << val;
      j++;
      val++;
    }
    i++;
    cout << endl;
  }
  return 0;
}
