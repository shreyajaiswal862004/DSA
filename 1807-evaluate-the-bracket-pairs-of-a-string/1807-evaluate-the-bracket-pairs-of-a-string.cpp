class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mpp;
        for(auto & it:knowledge){
            mpp[it[0]]=it[1];
        }

        bool inside=false;
        string ans;
        string key;
        for(auto it:s){
            if(it=='('){
                inside=true;
                key="";
            }
            else if(it==')'){
                if(mpp.count(key)){
                    ans+=mpp[key];
                    inside=false;
                }
                else ans+='?';
                inside=false;
            }
            else{
                if(inside){
                    key+=it;
                }
                else{
                    ans+=it;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna