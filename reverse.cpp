//Reverse an Array
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        // code here
    }
};
