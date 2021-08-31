#include <iostream>
using namespace std;

int main()
{
  int n, i = 1;
  cout << "Enter total number to be printed:" << endl;
  cin >> n;

  while (i <= n)
  {
    cout << i << " ";
    i++;
  }
  return 0;
}
