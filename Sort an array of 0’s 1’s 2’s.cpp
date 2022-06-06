#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    // Dutch national flag (DNF) algorithm
    int low = 0, mid = 0, high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else // arr[mid] == 1
            mid++;
     }   
}

// T.C. = O(N)
// S.C = O(1)
