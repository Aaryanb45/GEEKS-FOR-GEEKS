//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string ans;
        int sizeS1=s1.size()-1;
        int sizeS2=s2.size()-1;
        int carry=0;
        int res=0;
        for(int i=sizeS1, j=sizeS2;i>=0 || j>=0;i--,j--){
            int a=(i>=0)?s1[i]-48:0;
            int b=(j>=0)?s2[j]-48:0;
            res=a ^ b ^ carry;
            ans+=to_string(res);
        
            if(a==1 && b==1) carry=1;
            else if(a==0 && b==0 && carry==1) carry=0;
            else if((a==1 || b==1) && carry ==1) carry=1;
        }
        if(carry==1)
            ans+=to_string(carry);
        while(ans.back()=='0')
        {
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
