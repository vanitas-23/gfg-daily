#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > mat, int n)
    {

        long long sum=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        sum+=mat[i][j];
        long long res=0;
        for(int i=0;i<n;i++){
            long long temp=0;
            for(int j=0;j<n;j++)
            temp+=mat[i][j];
            res=max(res,temp);
        }
        
        for(int i=0;i<n;i++){
            long long temp=0;
            for(int j=0;j<n;j++)
            temp+=mat[j][i];
            res=max(res,temp);
        }
        return n*res-sum;
    } 
};