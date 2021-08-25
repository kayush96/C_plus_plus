#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    //Check if current element matches with the key
    if (arr[i] == key)
    {
      return i;
    }
  }
  //element not found
  return -1;
}
int main()
{
  int arr[] = {5, 2, 8, 4, 0, 6, 1};
  int n = sizeof(arr) / sizeof(int);
  int key;
  cin >> key;
  int index = linear_search(arr, n, key);
  if (index != -1)
  {
    cout << key << " is present at index " << index << endl;
  }
  else
  {
    cout << key << " is NOT Found!" << endl;
  }
}
