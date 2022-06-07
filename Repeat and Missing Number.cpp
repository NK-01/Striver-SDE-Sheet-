#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int>result;
    int sum = 0;
    unordered_map<int, int>freq;
    for(int i =0 ; i < arr.size(); ++i)
    {
        sum += arr[i];
        freq[arr[i]]++;
        if(freq[arr[i]] > 1)
            result.second = arr[i];
    }
    sum = sum - result.second;
    result.first = (n * n + n)/2 - sum;
    return result;
}
// T.C. : O(N)
// S.C. : O(N)
