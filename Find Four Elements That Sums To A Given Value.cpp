#include <bits/stdc++.h> 
string fourSum(vector<int> nums, int target, int n) {
    sort(nums.begin(), nums.end());
    int K;
    int i =0; 
    while(i <= n - 4)
    {
        // edge case*********** CTM
        K =target;
        K = K - nums[i];
        int k = i + 1;
        while( k <= n - 3)
        {
            K =  K - nums[k];
            int low = k + 1;
            int high = n - 1;
            while(low < high)
            {
                int sum = nums[low] + nums[high];
                if(sum == K)
                    return "Yes";
                else if(sum > K)
                    --high;
                else
                    ++low;
            }
            // next value of k
            int k_next = k+1;
            while(k_next <= n - 3)
            {
                if(nums[k] != nums[k_next])
                {
                    // edge case*********** CTM
                    K = K + nums[k];
                    k = k_next;
                    break;
                }
                ++k_next;
            }
            if( k_next > n -3)
                break;
        }
        //next value of i
        int i_next = i + 1;
        while(i <= n - 4)
        {
            if(nums[i] != nums[i_next])
            {
                i = i_next;
                break;
            }
            ++i_next;
        }
        if(i_next > n - 4)
            break;
    }
    return "No";
}

// T.C. : O(N^3)
// S.C. : O(1)
