#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top = 0, left = 0, right = m - 1,bottom = n - 1;
    if(bottom == 0 || right == 0)
        return;
    while(top < bottom && left < right)
    {
        // top to bottom

            for(int i = top; i < bottom; ++i)
                swap(mat[i][left], mat[ i + 1 ][left]);
            ++left;
        // left to right
            for(int i = left ; i <= right; ++i)
                swap(mat[bottom][i-1], mat[bottom][i]);
            --bottom;
        // bottom to top
            for(int i = bottom + 1 ; i > top; --i)
                swap(mat[i][right], mat[i - 1][right]);
            --right;
        //right to left
            for(int i = right + 1; i > left; --i)
                swap(mat[top][i], mat[top][i - 1]);
            ++top;
    }
}

// T.C. : O(N * M)
// S.C. : O(1)
