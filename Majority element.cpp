#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int f = floor(n / 2);
    unordered_map<int,int>freq;
    for(int i =0 ; i < n ; ++i)
    {    
        freq[arr[i]]++;
        if(freq[arr[i]] > f)
            return arr[i];
    }
    return -1;
}
// T.C. : O(N)
// S.C. : O(N)
