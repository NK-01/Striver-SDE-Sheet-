#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    // BRUTE FORCE
   /*
   int max_len = 0;
   for(int i =0 ; i < arr.size() - 1; ++i)
   {
       int check = arr[i];
       if(check == 0)
           max_len = max(max_len , 1);
       for(int j =i + 1 ; j < arr.size(); ++j)
       {
           check += arr[j];
           if(check == 0)
               max_len = max(j - i + 1, max_len);
       }
   }
    return max_len;
    
    // T.C. : O(N^2)
    // S.C. : O(1)
    */
    
    // OPTIMIZED SOLUTION
    int max_len = 0;
    unordered_map<int, int>mp;
    int current_sum = 0;
    for(int i =0 ; i < arr.size(); ++i)
    {
        current_sum += arr[i];
        if(current_sum == 0)
            max_len = i + 1;
        else if(mp.find(current_sum) == mp.end())
            mp[current_sum] = i;
        else
            max_len = max(max_len, (i - mp[current_sum]));
    }
    return max_len;
    
    // T.C. : O(N)
    // S.C. : O(N)
}
