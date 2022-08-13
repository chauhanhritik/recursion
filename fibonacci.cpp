// f(n) = f(n-1) + f(n-2)  --> this is the recurence relation
// n<=1 is the base condition("<" is important) 
// space complexity = n (n being the number we are finding the fibo of)

#include<iostream>
using namespace std;

int fibo(int n){
    if (n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(int argc, char const *argv[])
{   int n, fib;
    cout<<"Enter the no you want to find the fibo of: "<<endl;
    cin>>n;
    fib = fibo(n);
    cout << fib;
    return 0;
}

