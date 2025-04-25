class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
        vector<int> b(n+1,0);
        for(int i:citations)
        {
            if(i>=n)
                b[n]++;
            else
                b[i]++;
        }
        int cum=0;
        for(int i=n; i>=0; --i)
        {
            cum+=b[i];
            if(cum>=i)
                return i;
        }
        
    }
};
