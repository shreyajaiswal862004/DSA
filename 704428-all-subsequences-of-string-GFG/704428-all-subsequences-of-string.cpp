class Solution {
  public:
   void recur(vector<string>&ans, string &s, int idx, string temp, int n){
       if(idx==n){
           ans.push_back(temp);
           return;
       }
       
       temp.push_back(s[idx]);
       recur(ans,s,idx+1,temp,n);
       temp.pop_back();
       
       recur(ans,s,idx+1,temp,n);
   }
    vector<string> powerSet(string &s) {
        // Code here
        vector<string>ans;
        string temp;
        int n=s.size();
        recur(ans,s,0, temp,n);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna