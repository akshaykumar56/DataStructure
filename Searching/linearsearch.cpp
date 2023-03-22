#include<iostream>
 using namespace std;
int main()
{ 
    int a[100],n,value;
    int t=0;
    cout<<"enter the number of elements you want to be in array: ";
    cin>>n;   
    for(int i=0;i<=n-1;i++)   
    {       
      cout<<"enter value of a["<<i<<"]: ";       
      cin>>a[i];   
    }   
    cout<<"enter the value you want to find: ";  
    cin>>value;   
    for(int j=0;j<=n-1;j++)  
     {       
      if(a[j]==value)      
               {           
                  cout<<a[j]<<" is present at the position "<<(j+1)<<endl;           
                  t=1;       
                }  
      }  
     if(t==0)  
     {       
      cout<<"the value is not present in the array";  
     }   
      return 0;
    }