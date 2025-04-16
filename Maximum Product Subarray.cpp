class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
    int n =arr.size();
    // code here...
    int prod1=arr[0],prod2=arr[0],result=arr[0];
    for(int i=1;i<n;i++)
    {
        int temp1=prod1 * arr[i];
        int temp2= prod2 * arr[i];
        int tempMax=max({arr[i], temp1,temp2});
        int tempMin= min({arr[i], temp1,temp2});
        prod1=tempMax;
        prod2=tempMin;
        result =max(result,prod1);
    }
    return result;
    }
};
