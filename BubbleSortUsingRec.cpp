// In bubble sort, for any ith round, the ith largest element is taken to (n-ith) place in array
#include<iostream> 

using namespace std; 
void swap(int *a, int *b){

}

void bubbleSort(int * arr, int n){
    if(n == 1) return;
    
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]) {
            int a = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = a;
        }
    }
    bubbleSort(arr,--n);
}

int main() 
{ 
   int n, arr[10];
    cout << "\n Enter the elements of the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr,10);
    cout << "\n Sorted array is: ";
    for (int i = 0; i < 10; i++)
    {
        cout<< arr[i]<<"   ";
    }
     
    
   return 0; 
}