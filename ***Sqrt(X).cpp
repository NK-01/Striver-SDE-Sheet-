    int mySqrt(int x) {
     
        long long low = 0;
        long long high = x;
        int ans;
        
        while(low<=high)
        {
            long long mid= (low + high)/2;
            long long cmp = mid*mid;
            if(cmp == x)
                return mid;
            if(cmp > x)
                high = mid - 1;
            else
            {
                ans  = mid;
                low = mid + 1;
            }
        }
        return ans;
    }

// T.C: O(log x)
// S.C: O(1)
