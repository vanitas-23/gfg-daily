#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Count(vector<vector<int> >& mat) {
        // Code here
        int m=mat.size();
        int n=mat[0].size();
        int cnt=0;
        int dx[8]={1,-1,0,0,1,-1,1,-1};
        int dy[8]={0,0,1,-1,1,1,-1,-1};
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int temp=0;
            if(mat[i][j]==1){
                for(int x=0;x<8;x++){
                    int r=i+dx[x];
                    int c=j+dy[x];
                    if(r>=0 && r<m && c>=0 && c<n && mat[r][c]==0)
                    temp++;
                }
            }
             if(temp!=0 && temp%2==0)
            cnt++;
        }
           
        }
        return cnt;
    }
};