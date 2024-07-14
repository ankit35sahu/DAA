/*Binary search Iterative */
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int arr[10],s,i,n;
    cout <<"enter the size of array ";
    cin>>n;
    cout<<"enter the element in array (Sorted order) ";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search element " ;
    cin>>s;

     int low=0;
    int high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==s)
        {
          cout<<"Element is found index "<<mid; 
          return 0; 
        } 
        else if(arr[mid]<s)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"element is not found ";
  
}