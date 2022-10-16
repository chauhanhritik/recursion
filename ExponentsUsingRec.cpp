#include<iostream>
using namespace std; 

long long exp(int n, int power){
    if(power == 1) return n;
    if(power%2 == 0) return exp(n,power/2) * exp(n,power/2);
    else return n * exp(n,power/2) * exp(n,power/2); 
}

// an even more optimized approach would be- tho 
/*long long exp(int n, int power){
    if(power == 1) return n;
    long long ans = exp(n,n/2); //only one callmade compared to 2 made above
    if(power%2 == 0) return ans * ans;
    else return n * ans * ans; 
}*/

int main() 
 { 
    int n, power;
    cout<< "Enter the integer: ";
    cin >> n;
    cout << "\n Enter the power: ";
    cin >> power;
    cout << "\n" << exp(n,power);    

    return 0; 
}