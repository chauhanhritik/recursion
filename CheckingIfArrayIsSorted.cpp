#include<iostream> 
#include<vector>
using namespace std; 
//using recursion

/*bool ArrayCheck(vector<int> vec1,int size){
    if(size==1) return true;
    if(vec1[0]<vec1[1]) return false;
    return ArrayCheck(&(vec1),size-1);
} */

bool ArrayCheck(int * arr,int size){
    if(size==1 || size == 0) return true;
    if(*(arr)>*(arr+1)) return false;
    return ArrayCheck(arr+1,size-1);
}


int main() 
 { 
    int ele;
    int arr[10];

    // cout<< "Enter the size of the array : ";
    // cin >> n;
    cout<<" \nEnter the elements of the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
        // vec.push_back(ele);
    }
    if(ArrayCheck(arr,10))
        cout<< "\n Array is sorted ";
    else cout <<"\n Array is not sorted ";

 
    return 0; 
}