// insertion sort is stable abaptive and internal sorting algorithm////
// best, average and worst case time complexity are: O(n), O(n^2), O(n^2) respectively /////////
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
  int arr[100];
  int N;
  cout<<"Enter the number of elements you want to be in an array:";
  cin>>N;
  for(int i=0;i<=N-1;i++)
  {
      cout<<"enter the value of a["<<i<<"] :";
      cin>>arr[i];
  }
 printArray(arr,N);

	insertionSort(arr, N);
	printArray(arr, N);

	return 0;
}

