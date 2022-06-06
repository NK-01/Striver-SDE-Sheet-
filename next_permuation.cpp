// Code for finding next permutation
#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int ind1 = -1;
    // finding the break done point from reverse traversal 
    for(int i = n-2 ; i >= 0; --i)
        if(permutation[i] < permutation[i+1])
        {
            ind1 = i;
            break;
        }
    // finding the next greater elt of permutation[ind1] from reverse traversal
    if(ind1 != -1)
    {
        for(int i = n-1; i >= 0; --i)
            if(permutation[i] > permutation[ind1])
            {
                swap(permutation[ind1], permutation[i]); 
                break;
            }
    }
    // reverse the elements to the right of ind1
    for(int low = ind1 + 1, high = n - 1; low < high; ++low, --high)
        swap(permutation[low], permutation[high]);
     //Reverse via in-built function: reverse(permutation.begin() + ind1 + 1, permutation.end());
    return permutation;
}

// T.C. = O(n)
// S.C. = O(1)
