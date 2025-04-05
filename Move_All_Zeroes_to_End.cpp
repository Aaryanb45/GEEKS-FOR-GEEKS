
//Move All Zeroes to End
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        vector <int> temp;
        for(int i:arr)
        {
            if(i!=0)
            {
                temp.push_back(i);
            }
        }
        int n=temp.size();
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
        for(int i=n;i<arr.size();i++)
        {
            
            arr[i]=0;
        }
        
    }
};
