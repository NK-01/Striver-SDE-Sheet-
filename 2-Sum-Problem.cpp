// APP -1
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   int rem = 0;
    vector<vector<int>>result;
    for(int i =0 ; i < arr.size() - 1; ++i)
    {
        rem = s-arr[i];
        for(int j = i + 1; j < arr.size(); ++j)
        {
            if(rem == arr[j])
            {
                vector<int>list;
                if(rem < arr[i])
                {
                    list.push_back(arr[j]);
                    list.push_back(arr[i]);
                }
                else
                {
                    list.push_back(arr[i]);
                    list.push_back(arr[j]);
                }
                result.push_back(list);
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}
// T.C. : O(N^2)
// S.C. : O(N^2)

//APP - 2 
/*
1. sort the given array
2. then apply binary search on them
3. accordingly insert elements element apirs into the result vector, as given below
vector<int> twoSum(vector<int>& n, int target) {
        int low = 0, high = n.size() - 1;
        //sorting the array is very imp
        vector<pair<int,int>>nums;
        for(int i =0 ; i < n.size(); ++i)
        {
            pair<int,int>p;
            p.first = n[i];
            p.second = i;
            nums.push_back(p);
        }
        sort(nums.begin(), nums.end());
        vector<int>result;
        while(low < high)
        {
            if(nums[high].first + nums[low].first == target)
            {
                result.push_back(nums[low].second);
                result.push_back(nums[high].second);
                return result;
            }
            else if(nums[high].first + nums[low].first < target)
                ++low;
            else
                --high;
        }
        return result;
    }
    
    use vector<pair<int,int>> to keep track of elements w.r.t their corresponding index.

*/
