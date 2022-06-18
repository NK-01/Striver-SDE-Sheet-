#include <bits/stdc++.h> 
void merge(int low, int mid, int high, long long *arr, long long &inv);
void merge_sort(int low, int high, long long *arr, long long &inv);

long long getInversions(long long *arr, int n){
    long long inv = 0;
    merge_sort(0, n-1, arr, inv);
    return inv;
}
void merge_sort(int low, int high, long long *arr, long long &inv)
{
    if(high <= low)
        return ;
    int mid = (low + high) / 2;
    merge_sort(low, mid, arr, inv);
    merge_sort(mid + 1, high, arr, inv);
    merge(low, mid, high, arr, inv);
}
void merge(int low, int mid, int high, long long *arr, long long &inv)
{
    int len1 = mid-low+1;
    int len2 = high - mid;
    long long first[len1];
    long long second[len2];
    for(int i = 0, j = low; i < len1; ++i, ++j)
        first[i] = arr[j];
    
    for(int i = 0, j =mid+ 1; i < len2; ++i, ++j)
        second[i] = arr[j];
    int i = 0;
    int j = 0;
    while(i < len1 && j < len2)
    {
        if(first[i] > second[j])
        {
            inv += len1 - i;
            arr[low++] = second[j++];
        }
        else
        {
            arr[low++] = first[i++];
        }
    }
    while(i < len1)
    {
        arr[low++] = first[i++];
    }
    while(j < len2)
    {
        arr[low++] = second[j++];
    }
}
