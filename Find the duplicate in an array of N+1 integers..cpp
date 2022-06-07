#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    //APPROACH - 1
	unordered_map<int, int>freq;
    int i =0 ;
    for(int i =0 ; i < arr.size(); ++i)
    {
        freq[arr[i]]++;
        if(freq[arr[i]] > 1)
            return arr[i];
    }
    return -1;
}
// T.C. : O(N)
// S.C. : O(N)
