#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    // BRUTE FORCE
    /*
    int match = 0, count = 0;
    for(int i =0 ; i < arr.size(); ++i)
    {
        match = 0;
        for(int j =i; j < arr.size(); ++j)
        {
            match ^= arr[j];
            if(match == x)
                ++count;
        }
    }
    return count;
    
    // T.C.: O(N^2)
    // S.C. : O(1)
    
    */
    
    // OPTIMAL APPROACH
    
    unordered_map<int, int> mp;
    int count = 0, Xor = 0, y = 0;
    for(int i =0; i < arr.size(); ++i)
    {
        Xor ^= arr[i];
        if(Xor == x)
            ++count;
        y = Xor ^ x;
        if(mp.find(y) != mp.end())
            count += mp[y];
        mp[Xor]++;
    }
    return count;
    
    // T.C.: O(N) --> O(NlogN) if using map<int,int>
    // S.C.: O(N)
    
}
