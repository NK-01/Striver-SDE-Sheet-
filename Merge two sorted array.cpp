#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    //if there are no elements in arr2 then arr1 will be the final answer
	if(arr2.size() > 0)
    {
        int ptr = arr1.size() - arr2.size();
        int j = 0;
        //in the condition part n indicates if there are elements in arr2 to be sorted or not
        for(int i =0 ; i < arr1.size() && n; ++i)
        {
            if(arr1[i] > arr2[j])
            {
                for(int k = ptr; k > i; --k)
                    arr1[k] = arr1[k-1];
                arr1[i] = arr2[j];
                ++j;
                ++ptr;
                --n;
            }
        }
        while(ptr < arr1.size())
        {
            arr1[ptr] = arr2[j];
            ++j;
            ++ptr;
        }
    }
    return arr1;
}

// T.C.: O(N * M) -- TO CONFIRM
// S.C.: O(1)
