#include<iostream>
using namespace std; 

long long exp(int n, int power){
    if(power == 1) return n;
    if(power%2 == 0) return exp(n,power/2) * exp(n,power/2);
    else return n * exp(n,power/2) * exp(n,power/2); 
}

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