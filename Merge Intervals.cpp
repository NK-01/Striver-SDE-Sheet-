#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
// APPROACH - 1 : (in-place)    
//    sort(intervals.begin(), intervals.end());
//         for(int i =1; i < intervals.size() ; ++i)
//         {
//             if(intervals[i][0] <= intervals[i - 1][1])
//             {
//                 intervals[i-1][1] = max(intervals[i][1], intervals[i-1][1]);
//                 intervals.erase(intervals.begin() + i);
//                  --i;
//             }
//         }
//     return intervals;
    
// T.C. = O(NlogN) + O(N) 
// S.C. = O(1)
    // APPROACH - 2
    if(intervals.size() <= 1)
        return intervals;
    vector<vector<int>>result;
    sort(intervals.begin(), intervals.end());
    result.push_back(intervals[0]);
    for(int i = 1; i < intervals.size(); ++i)
    {
        vector<int>cmp = result.back();
        //merge
        if(intervals[i][0] <= cmp [1])
        {
            result[result.size()-1][1] = max(intervals[i][1], cmp[1]);
        }
        else
        {
            result.push_back(intervals[i]);
        }
        cmp.pop_back();
    }
    return result;
}

// T.C. = O(NlogN) + O(N)
// S.C. = O(N)
