#include <bits/stdc++.h> 

void merge_sort(vector<int> &, int , int , int &);
void merge(vector<int>&, int , int , int , int &);
int reversePairs(vector<int> &arr, int n){
	int rp;
    merge_sort(arr, 0, n-1, rp);
    return rp;
}
void merge_sort(vector<int> &arr, int low, int high, int &rp)
{
    if(high <= low)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid, rp);
    merge_sort(arr, mid + 1, high, rp);
    merge(arr, low, mid, high, rp);
}
void merge(vector<int>&arr, int low, int mid, int high, int &rp)
{
    int len1 = mid - low + 1;
    int len2 = high - mid;
    int first[len1];
    int second[len2];
    for(int i =0, j = low ; i < len1; ++i, ++j)
        first[i] = arr[j];
    for(int i = 0, j = mid+1; i < len2; ++i, ++j)
        second[i] = arr[j];
    // perform count
    int i = 0, j =0 ;
    while(i < len1 and j < len2)
    {
        if(first[i] > (2*second[j]))
        {
            rp += len1- i;
            ++j;
        }
        else
            ++i;
    }
    // perform merge;
    i =0;
    j =0;
    while(i < len1 and  j < len2)
    {
        if(first[i] > second[j])
            arr[low++] = second[j++];
        else
            arr[low++] = first[i++];
    }
    while(i < len1)
        arr[low++] = first[i++];
    while(j < len2)
        arr[low++] = second[j++];
}
// T.C. : O(N logN) + O(N)
// S.C. : O(1)
