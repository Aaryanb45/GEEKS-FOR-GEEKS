class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here
        vector<int >v;
        map<int,int>mp;
        int n=arr.size();
        int min=int(n/3)+1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==min)
            {
                v.push_back(arr[i]);
                sort(v.begin(),v.end());
            }
            if(v.size()==2)
                break;
        }
        return v;
        
    }
};
