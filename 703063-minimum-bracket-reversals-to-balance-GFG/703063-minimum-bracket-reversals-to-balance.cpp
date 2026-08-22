class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        int len=s.size();
        if (len % 2 != 0) return -1;
        stack<char>st;
        for(auto it:s){
            if(it=='{'){
                st.push('{');
            }
            else{
                if(!st.empty() && st.top()=='{' && it=='}'){
                    st.pop();
                }
                else{
                    st.push('}');
                }
            }
        }
        
        int n=0,m=0;
        while(!st.empty()){
            if(st.top()=='{'){
                n++;
                st.pop();
            }
            else{
                m++;
                st.pop();
            }
        }
        
        return (n+1)/2 + (m+1)/2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna