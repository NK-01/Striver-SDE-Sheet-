#include <bits/stdc++.h> 

int find_path(int i, int j, int m, int n, vector<vector<int>>&dp);

int uniquePaths(int m, int n) {
    vector<vector<int>>dp;
    vector<int>row(n, -1);
    for(int i =0 ; i < m ; ++i)
        dp.push_back(row);
	return find_path(0, 0, m , n, dp);
}
int find_path(int i, int j, int m, int n, vector<vector<int>>&dp)
{
    if(i == m-1 && j == n-1 )
        return 1;
    if(i >= m || j >= n)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    dp[i][j] = find_path(i, j + 1, m, n, dp) + find_path(i + 1, j, m, n, dp);
    return dp[i][j];
}
