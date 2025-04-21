class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        int n=pat.size();
        int m=txt.size();
        vector<int>v;
        vector<int> lps(n,0);
        int len=0;
        int i=1;
        while(i<n)
        {
            if(pat[i]==pat[len])
                lps[i++]=++len;
            else
                {
                    if(len!=0)
                    {
                        len=lps[len - 1];
                    }
                    else{
                        lps[i++]=0;
                    }
                }
        }
        i=0;
        int j=0;
        while(i<m)
        {
            if(pat[j]==txt[i])
            {
            i++;
            j++;
        }
        
            if(j==n)
            {
                 v.push_back(i-j);
                j=lps[j-1];
            
            }
        else if(i<m && pat[j]!=txt[i]){
            if(j!=0){
                j=lps[j-1];
            }
            else
            {
                
                i++;
            }
        }
    }
    return v;

        
    }
};
