#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
  
    int n = prices.size();
    int max_profit = 0;
    vector<int>buy(n);
    vector<int>sell(n);
    sell[n-1] = prices[n-1];
    buy[0] = prices[0];
    
    //filling all elts of buy[]
    for(int i = 1 ; i < n; ++i)
    {
        if(buy[i-1] < prices[i])
            buy[i] = buy[i-1];
        else
            buy[i] = prices[i];
    }
    
    //filling all elts of sell[]
    for(int i = n-2; i >=0 ;--i)
    {
        if(sell[i+1] > prices[i])
            sell[i] = sell[i+1];
        else
            sell[i] = prices[i];
    }
    
    //finding the maximum profit
    for(int i =0 ; i < n; ++i)
        max_profit = max(max_profit, sell[i] - buy[i]);

    return max_profit;
}

// T.C. = O(N)
// S.C. = O(N)

/*
// buy[] is unnecessary, rather we can code as below
int n = prices.size();
        vector<int>sell(n);
        //buy[0] = prices[0];
        sell[n-1] = prices[n-1];
        for(int i = n - 2; i >= 0; --i)
            sell[i] = max(sell[i+1], prices[i]);
        int max_profit = 0;
        for(int i =0 ; i < n ; ++i)
            max_profit = max(max_profit, sell[i] - prices[i]);
        return max_profit;
*/
