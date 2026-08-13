class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        // code here
        vector<int>ans;
        for(auto it:arr){
            bool alive=true;
            while(alive && !ans.empty() && ((ans.back()>0 && it<0) || (ans.back()<0 && it>0))){
                if(abs(ans.back())> abs(it)){
                    alive=false;
                }
                else if (abs(ans.back()) < abs(it)){
                    ans.pop_back();
                }
                else{
                    ans.pop_back();
                    alive=false;
                }
            }
            if(alive) ans.push_back(it);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna