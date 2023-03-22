// bubble sort is abaptive, stable and internal sorting algorithm  //////
//// best, average and worst case time complexity are: O(n), O(n^2), O(n^2) respectively /////////
#include <iostream>
using namespace std;
void BubbleSort(int arr[],int N) // N-->size of array
{
    int n=2N;
    for(int i=0;i<=n-1;i++) //i-->iterations means total n-1 iteration
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(int arr[], int N)
{
   int n=N;
   for(int i=0;i<=n-1;i++)
   {
       cout<<arr[i]<<" ";
   }
}
int main() {
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
 cout<<endl;
 BubbleSort(arr,N);
 printArray(arr,N);
  
return 0;
}