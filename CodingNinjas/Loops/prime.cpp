#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number to check: " << endl;
  cin >> n;
  int d = 2;
  bool isDivided = false;
  while (d < n)
  {
    if (n % d == 0)
    {
      isDivided = true;
      cout << "Not Prime";
    }
    d++;
  }
  if (!isDivided)
  {
    cout << "Prime Number" << endl;
  }
}
