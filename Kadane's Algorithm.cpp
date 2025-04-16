class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int sum=0;
        int max=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>max)
            {
                max=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
            
        }
        return max;
    }
};
