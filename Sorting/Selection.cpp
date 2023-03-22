#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
       
    // Find the minimum element in unsorted array
        min_idx = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
    // Swap the found minimum element with the first element
        if(min_idx!=i)
            swap(arr[min_idx], arr[i]);
    }
}
 
//Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver program to test above functions
int main()
{
    int arr[100];
  int n;
  cout<<"Enter the number of elements you want to be in an array:";
  cin>>n;
  for(int i=0;i<=n-1;i++)
  {
      cout<<"enter the value of a["<<i<<"] :";
      cin>>arr[i];
  }
    printArray(arr,n);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

