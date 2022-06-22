#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
    
    vector<vector<int>>result;
    sort(nums.begin(), nums.end());

    for(int i =0; i < n-2; )
    {
        int target = K-nums[i];
        int low = i + 1;
        int high = n -1;
        while(low < high)
        {
            int sum = nums[low] + nums[high];
            if(sum == target)
            {
                vector<int>triplet;
                triplet.push_back(nums[i]);
                triplet.push_back(nums[low]);
                triplet.push_back(nums[high]);
                result.push_back(triplet);
                //new unique elt's value for low
                int h = high - 1;
                while(high >= 0)
                {
                    if(nums[high] != nums[h])
                    {
                        high = h;
                        break;
                    }
                    h--;
                }
                //new unique elt's value for high
                if(high == -1)
                    break;
                int l = low + 1;
                while(low <= n-3)
                {
                    if(nums[low] != nums[l])
                    {
                        low = l;
                        break;
                    }
                    low++;
                }
                if(low > n-3)
                    break;
            }
            else if(sum > target)
                high--;
            else
                low++;
        }
        //new unique elt's value for i
        int i_next = i+1;
        while(i_next <= n-3)
        {
            if(nums[i] != nums[i_next])
            {
                i = i_next;
                break;
            }
            ++i_next;
        }
        if(i_next > n-3)
            break;
    }
    return result;
}

// T.C.: O(N^2)
// S.C.: O(1)
