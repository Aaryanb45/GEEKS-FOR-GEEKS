
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        unordered_set<int > hash(arr.begin(),arr.end());
        for(int i=1;i<=n+1;i++)
            if(hash.find(i)==hash.end())
                return i;
    }
};
