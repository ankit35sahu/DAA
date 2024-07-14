/*Binary search Recursive */
#include<stdio.h>
#include<iostream>
using namespace std;

int binarysearch(int arr[10],int s,int low,int high)
{
    if(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==s){
          return mid;
        }
        else if(arr[mid]<s)
        {
            binarysearch(arr,s,mid+1,high);
        }
        else{
            binarysearch(arr,s,low,mid-1);
        }
    }
    return -1;
}
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
    int found = binarysearch(arr,s,0,n-1);
    if(found==-1){
        cout<<"Element is not found";
    }
    else{
        cout<<"Element is found "<<found;
    }
    return 0;

}