#include <iostream>
using namespace std;
int main()
{
  int i, n;
  cout << "Enter value of N: ";
  cin >> n;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << i;
      j++;
    }
    i++;
    cout << endl;
  }
  return 0;
}
