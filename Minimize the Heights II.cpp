class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(n==1)
        {
            return 0;
        }
        sort(arr.begin(),arr.end());
        int ans =arr[n-1]-arr[0];
        int maxim,mini;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k<0)
            {
                continue;
            }
            mini=min(arr[0]+k,arr[i]-k);
            maxim=max(arr[i-1]+k,arr[n-1]-k);
            ans=min(ans,maxim-mini);
            
        }
        return ans;
    }
};
