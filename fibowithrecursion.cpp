#include<iostream>
using namespace std;
int fib(int n) {
   if(n<=1) {
      return(n);
   }else {
      return(fib(n-1)+fib(n-2));
   }
}
int main() {
   int n;
   cout << "Enter the number of you want to fibonnaci no. : ";
   cin >> n;
   cout << "\nFibonnaci Series : "<< fib(n);
     return 0;
}

//cout << "Enter the number upto you want fibonnaci series  : ";
//cout << "\nFibonnaci Series : ";
//for(i=0;i<=n;i++)
//{ cout<<" " << fib(i);
//}

