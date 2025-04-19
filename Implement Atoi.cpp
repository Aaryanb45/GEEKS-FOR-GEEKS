//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int myAtoi(char *s) {
    // Your code here
    int sign=1;
    int num=0;
    int pos=0;
    while(s[pos]==' ')
    {
        pos++;
        
    }
    if(s[pos]=='-'|| s[pos]=='+')
    {
        if(s[pos]=='-')
        {
            sign=-1;
        }
        pos++;
    }
    while(s[pos]>='0' && s[pos]<='9'){
        if(num > INT_MAX/10 || (num == INT_MAX /10 && s[pos]-'0'>7)){
            if(sign==1){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
            num=(10*num)+(s[pos++] -'0');
            
        }
        return num*sign;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
