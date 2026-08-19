class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        string ans = "";
        vector<int> freq(26, 0);
        queue<char>q;
        for(int i=0;i<s.size();i++){
            q.push(s[i]);
            freq[s[i]-'a']++;
            
            while(!q.empty() && freq[q.front()-'a']>1){
                q.pop();
            }
            ans+=q.empty()? '#':q.front();
        }
        return ans;
    }
    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna