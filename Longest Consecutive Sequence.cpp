#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {

// BRUTE FORCE
//     sort(arr.begin(), arr.end());
//     int max_new = 0, max_old = 0;
//     for(int i =0 ; i < arr.size() - 1; ++i)
//     {
//         if(arr[i] == arr[i + 1])
//             continue;
//         if(arr[i] == arr[i+1] - 1)
//         {
//             max_new++;
//             if(max_new > max_old)
//                 max_old = max_new;
//         }
//         else
//             max_new = 0;
//     }
//     return max_old + 1;
//    T.C. : O(NlogN) + O(N)
//    S.C. : O(N)
    
    
    unordered_map<int, int>mp;
    
    // storing values into hash map
    for(int i =0 ; i < arr.size(); ++i)
        mp[arr[i]]++;
    //finding the minimal elt of the seqns
    int maxm = 1, count = 1; 
    for(int i = 0; i < arr.size(); ++i)
    {
        // finding the minimal elt of the seqns
        if(mp.find(arr[i] - 1) == mp.end())
        {
            int num = arr[i];
            while(mp.find(++num) != mp.end())
                ++count;
            maxm = maxm > count ? maxm : count; 
            count = 1;
        }   
    }
    return maxm;
    
 // T.C. : O(N)
 // S.C. : O(N)
}
