#include <iostream>
using namespace std;

int partition(int arr[],int s,int e ){

    int pivot=arr[s];

    int count=0;
    for (int i=s+1;i<=e;i++)
    {
        if(arr[i]<= pivot){
            count++;
        }
    }
//pindex=pivot index 
    int pindex=s+count;
    swap(arr[pindex],arr[s]);

    int i=s,j=e;
    // condition for left < p >right 
    while(i<pindex && j>pindex){

        while(arr[i]<=pivot)
        {
            i++;
        }
       while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pindex && j>pindex){
            swap(arr[i],arr[j]);
        } 

    }

    return pindex;
} 

void quicksort(int arr[],int s, int e)
{
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
// left part 
    quicksort(arr,s,p-1);
//right part 
    quicksort(arr,p+1,e);
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n=6;
        cout<<"Given Array: \n";
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<"  ";
    }cout<<endl;
   
    quicksort(arr,0,n-1);

    cout<<"Sorted Array: \n";
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<"  ";
    }cout<<endl;
    return 0;
}