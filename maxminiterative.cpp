#include<iostream>
using namespace std;

void maxmin(int arr[],int n,int &max ,int &min)
{   
    max=min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }  
}

int main(){
    int arr[10],n,max,min;
    cout <<"enter the size of array ";
    cin>>n;
    cout<<"enter the element in array ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    maxmin(arr,n,max,min);

    cout<<"Max= "<<max<<endl;
    cout<<"Min= "<<min<<endl;
    return 0;
}