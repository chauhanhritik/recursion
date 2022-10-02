#include<iostream> 
#include<vector>
using namespace std; 

int sumArray(int * arr, int size){
    if(size == 1) return arr[0];
     return arr[0] + sumArray(arr+1,size-1);
}

int main() 
 { 
    int n, arr[10];
    cout<<"Enter no of elements(max 10) : ";
    cin >>n;
    cout<<"\n Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     
    int sum = sumArray(arr,n);
    cout<<"\n the sum is: "<<sum;

    return 0; 
}