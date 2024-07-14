#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){

    int mid= (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first=new int [len1];
    int *second=new int [len2];
    //copy aaray//  
     int k=s;
     for(int i=0;i<len1;i++){
        first[i]=arr[k];
        k++;
     }
      k=mid+1;
     for(int i=0;i<len2;i++){
        second[i]=arr[k];
        k++;
     }

     //merge arrays//

     int index1=0;
     int index2=0;
      k=s; //k is main array index//

     while(index1 < len1 && index2 < len2)
     {
        if(first[index1]<second[index2]){
            arr[k]=first[index1];
            k++;
            index1++;
        }
        else{
             arr[k]=second[index2];
             k++;
             index2++;
        }         
     }
     while (index1<len1)
     {
        arr[k]=first[index1];
         k++;
         index1++;
     }
     while (index2<len2)
     {
        arr[k]=second[index2];
        k++;
        index2++;
     }
}

void mergesort(int arr[],int s,int e)
{
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);  
}

int main(){
    int arr[]={9,3,15,48,32,65,22,82,99,42,73};
    int n=11;
    cout<<"Given Array: \n";
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<"  ";
    }cout<<endl;
   
    mergesort(arr,0,n-1);
    cout<<"Sorted Array: \n";
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<"  ";
    }cout<<endl;
    return 0;
}