// Print a sequence of no starting with N with A[0] = N, in which A[i+1] = A[i] - 5 until A[i]>0, then A[i+1] = A[i] + 5 until A[i] = N

#include<iostream>
#include<vector>
using namespace std;

// 1st way with flag inc and cur_value
void pattern(int n, vector<int> &vec , int cur_value , bool inc){
    vec.push_back(cur_value);

    if (inc){
        if(cur_value == n) return;
        else pattern(n,vec,cur_value+5,true);
    } else{
        if(cur_value-5>0) pattern(n,vec, cur_value-5,false);
        else pattern(n, vec, cur_value-5,true);
    }
    
}


// 2nd way without flag inc and cur_value
void pattern(int cur_value, vector<int> &vec){
     if(cur_value<=0){
        vec.push_back(cur_value);
        return;
     }
     vec.push_back(cur_value);
     pattern(cur_value-5,vec);
     vec.push_back(cur_value);
}



int main(int argc, char const *argv[])
{   int n;
    vector<int> vec1;
    cout<<"Enter the no: \n";
    cin>>n;
    pattern(n,vec1,n,false);
    // pattern(n,n);
    return 0;
}
