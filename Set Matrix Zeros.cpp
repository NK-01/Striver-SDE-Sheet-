// CODE FOR - Set Matrix Zeros
#include <bits/stdc++.h> 
void convert(vector<vector<int>>&, int, int);
void setZeros(vector<vector<int>> &matrix)
{
    vector<vector<int>>aux = matrix;
    // checking for cell that have value 0
	for(int i = 0; i < aux.size(); ++i)
        for(int j = 0; j < aux[i].size(); ++j)
            if(aux[i][j] == 0)
                // to convert the entire row and column of that cell to 0s
                convert(matrix , i, j);
    
}
void convert(vector<vector<int>>&matrix, int i, int j)
{
    //setting row to 0
    for(int col = 0; col < matrix[i].size(); ++col)
        matrix[i][col] = 0;
    //setting entire column to 0
    for(int row = 0; row < matrix.size(); ++row)
        matrix[row][j] = 0;
}
