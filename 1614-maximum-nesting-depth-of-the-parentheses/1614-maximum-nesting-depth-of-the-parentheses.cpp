class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int r=0,n=s.size(),maxcount=0;
        while(r<n){
            if(s[r]=='(') st.push('(');
            else if (s[r]==')'){
                maxcount=max(maxcount,(int)st.size());
                st.pop();
            }
            r++;
        }
        return maxcount;
    }
};