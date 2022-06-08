#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int f = floor(arr.size()/3);
    unordered_map<int, int>freq;
    vector<int>result;
    for(int i =0 ; i <arr.size(); ++i)
        freq[arr[i]]++;
    for(auto x : freq)
        if(x.second > f)
            result.push_back(x.first);
    return result;
}
// T.C. : O(N)
// S.C. : O(N)
