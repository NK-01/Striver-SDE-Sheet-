#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    for(int i =0 ; i < m; ++i)
        if(mat[i][n - 1] >= target)
        {
             // linear search
             /*
             for(int j = 0; j < n; ++j)
                 if(mat[i][j] == target)
                    return result;
                    */
            // binary search
            int low = 0, high = n -1;
            while(low <= high)
            {
                int mid = (high - low)/2 + low;
                if(mat[i][mid] == target)
                    return true;
                else if( target > mat[i][mid] )
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
    return false;
}
