#include <iostream>
using namespace std;

int main()
{
  /*    ****
        ****
        ****
        ****
  */
  int i = 1, num;
  cin >> num;

  while (i <= num)
  {
    int j = 1;
    while (j <= num)
    {
      cout << "*";
      j++;
    }
    i++;
    cout << endl;
  }
}
