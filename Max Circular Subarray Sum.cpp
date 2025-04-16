class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int totalsum=0;
        int currentmaxsum=0;
        int currentminsum=0;
        int maxsum=arr[0];
        int minsum=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            currentmaxsum=max(currentmaxsum+arr[i],arr[i]);
            maxsum=max(maxsum,currentmaxsum);
            currentminsum=min(currentminsum+arr[i],arr[i]);
            minsum=min(minsum,currentminsum);
            totalsum=totalsum+arr[i];
        }
        int normalsum=maxsum;
        int circularsum=totalsum-minsum;
        if(minsum==totalsum)
        {
            return normalsum;
        }
        return max(normalsum,circularsum);
        // your code here
    }
};
