#include <iostream>
using namespace std;
int main()
{
  int i = 1, n;
  cin >> n;
  while (i <= n)
  {
    int j = 1;
    int num = n;
    while (j <= n)
    {
      cout << num;
      num--;
      j++;
    }
    i++;
    cout << endl;
  }

  return 0;
}