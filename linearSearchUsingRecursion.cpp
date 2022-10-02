#include<iostream> 
// #include<vector>
using namespace std; 

void linearSearch(int * arr, int size, int ele){
    if (size == 0){
        cout<<"\n Element not present";
        return;
    }
    if(arr[0]==ele){
         cout << "\n Element found at index : "<<10-size;
         return;
    }
    linearSearch(arr+1,size-1,ele);
}

int main() 
{ 
    int n,arr[10],ele;
    cout << "Enter the array(10 elements) : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "\n Enter the element you want to search for: ";
    cin >> ele;
    linearSearch(arr,10,ele);
    return 0; 
}