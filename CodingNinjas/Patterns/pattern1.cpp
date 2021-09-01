#include <iostream>
using namespace std;

int main()
{
  int i = 1, n;
  cout << "Enter value of n:" << endl;
  cin >> n;

  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
