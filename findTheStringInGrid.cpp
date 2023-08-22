#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
	vector<vector<int>> dirn{{-1, -1},{-1, 0},{-1, 1}, {1, -1},{1, 0},{1, 1}, {0, -1}, {0, 1}};
    
    bool dfs(vector<vector<char>> &grid, int x, int y, int d1, int d2, int idx, string s, int l){
        
        if(idx>=l) return true;
        if(x<0 || y<0 || x >= grid.size() || y>=grid[0].size()) return false;
        if(grid[x][y]==s[idx]){
            return dfs(grid, x+d1, y+d2, d1, d2, idx+1, s, l);
        }
        else return false;
        
        
    }

	vector<vector<int>>searchWord(vector<vector<char>>grid, string s){
	    vector<vector<int>> ans;
	    int k = s.length();
	    int n=grid.size(), m = grid[0].size();
	   
	    for(int i = 0; i < n; ++i){
	        for(int j = 0; j < m; ++j){
	           if(grid[i][j]==s[0]){
	               for(auto it: dirn){
	                   if(dfs(grid, i+it[0], j+it[1], it[0], it[1], 1, s, k)) {
	                       ans.push_back({i, j});
	                       break;
	                   }
	               }
	           }
	           
	        }
	    }
	    return ans;
	}
};