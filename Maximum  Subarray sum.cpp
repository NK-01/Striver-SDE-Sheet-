#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long current_sum = 0, max_sum = 0;
    for(int i =0 ; i < n; ++i)
    {
        if(current_sum > 0)
            current_sum += arr[i];
        else
            current_sum = arr[i];
        if(max_sum < current_sum)
            max_sum = current_sum;
    }
    return max_sum;
}

// T.C. = O(n)
// S.C. = O(1)
