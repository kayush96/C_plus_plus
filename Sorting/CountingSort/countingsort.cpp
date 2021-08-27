#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int arr[], int n)
{
  int largest = -1;
  for (int i = 0; i < n; i++)
  {
    largest = max(largest, arr[i]);
  }
  //create a count array
  vector<int> freq(largest + 1, 0);

  //Update the freq array
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]]++;
  }
  //put back the elements from freq into original array
  int j = 0;
  for (int i = 0; i <= largest; i++)
  {
    while (freq[i] > 0)
    {
      arr[j] = i;
      freq[i]--;
      j++;
    }
  }
  return;
}

int main()
{
  int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
  int n = sizeof(arr) / sizeof(int);

  counting_sort(arr, n);
  //print sorted array items.
  for (auto x : arr)
  {
    cout << x << " ";
  }
  return 0;
}
