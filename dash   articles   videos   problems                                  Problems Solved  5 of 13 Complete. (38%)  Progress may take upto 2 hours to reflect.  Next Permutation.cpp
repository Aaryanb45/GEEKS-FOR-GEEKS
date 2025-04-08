class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int i=arr.size()-1;
        while(i>0 && arr[i-1]>=arr[i])
        {
            i--;
        }
        if(i==0)
        {
            reverse(arr.begin(),arr.end());
            return;
        }
        int j=arr.size()-1;
        while(j>=i && arr[j]<=arr[i-1])
        {
            j--;
        }
        swap(arr[i-1], arr[j]);
        reverse(arr.begin()+i,arr.end());
    }
};
