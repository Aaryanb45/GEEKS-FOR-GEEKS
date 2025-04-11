class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int maxprofit=0;
        int minprice=prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else{
                
                int profit=prices[i]-minprice;
                if(profit>maxprofit)
                {
                    maxprofit=profit;
                }
            }
           
            
        }
        return maxprofit;
        
    }
};
