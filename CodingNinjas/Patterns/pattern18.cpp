#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i = 1;
  int num = n;
  while (i <= n)
  {
    int j = 1;
    while (j <= num)
    {
      cout << num;
      j++;
    }
    num--;
    i++;
    cout << endl;
  }
  return 0;
}
