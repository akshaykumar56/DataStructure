#include <iostream>
using namespace std;


int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<A[i]<<" ";
    }
   cout<<endl;
}

int main()
{
     int A[100];
     int n;
     cout<<"Enter the number of elements you want to be in an array:";
     cin>>n;
     for(int i=0;i<=n-1;i++)
     {
      cout<<"enter the value of a["<<i<<"] :";
      cin>>A[i];
     }
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}
