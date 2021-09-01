#include <iostream>
using namespace std;

int main()
{
  int start, end, step, cel;

  cin >> start >> end >> step;

  while (start <= end)
  {
    cel = ((5 * (start - 32))/ 9);
    cout << start << "\t" << cel << endl;
    start += step;
  }

  return 0;
}
