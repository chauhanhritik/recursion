// There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top (order does matter).

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    int memSolve(int n, vector<int> &dp){   //Function to compute answer using memoization
        if(n<0) return 0; 
        if(n<=1) return 1; //the 0th stair can be used to jump and then land back on it thus we return 1
        
        if(dp[n]!=-1) return dp[n]; //if the solution has already been calculated for the value of n, 
                                    //then no need to calculate it again... use the stored value instead.
        
        dp[n] = countWays(n-1) + countWays(n-2); //n-1 and n-2 used as only 1 or 2 stairs can be jumped. Store the value in the DP array.
        
        return dp[n];
    }
    
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        if(n<0) return 0; 
        if(n<=1) return 1; //the 0th stair can be used to jump and then land back on it thus we return 1
        int ans = countWays(n-1) + countWays(n-2); //n-1 and n-2 used as only 1 or 2 stairs can be jumped
        
        return ans;

    }
    
    int DPSolve(int n){
        
        vector<int> dp(n+1, -1);    //DP array to store computed values
        return memSolve(n, dp);        
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends
