class Solution {
  public:
    int findSubString(string& str) {
        // code here
        set<char>st;
        for(char ch :str){
            st.insert(ch);
        }
        
        int n=st.size();
        unordered_map<char,int>freq;
        int i=0,minlen=INT_MAX;
        for(int j=0;j<str.size();j++){
            freq[str[j]]++;
            while(freq.size()==n){
                minlen=min(minlen,j-i+1);
                freq[str[i]]--;
                if(freq[str[i]]==0) freq.erase(str[i]);
                i++;
            }
        }
        return (minlen==INT_MAX)? -1:minlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna