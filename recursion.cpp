// stack follows LIFO and stack is where functions are allocated memory and as sooon as their execution is done, memory is deallocated deallocated 
// recirsive solutionstake more space ususally then iterative solutions
// a function calling itself is recusriuon (an iterative way)

#include<iostream>
using namespace std;

void recur (int i){
    if(i>5){return ;}
    cout<<i << endl;
    recur(i+1);
}

int main()
{   
    // the normal iterative form
    for (int i = 1; i < 6; i++)
    {
        cout<<i<<endl;
    }

    // calling through recursion
       recur(1);
    return 0;
}
