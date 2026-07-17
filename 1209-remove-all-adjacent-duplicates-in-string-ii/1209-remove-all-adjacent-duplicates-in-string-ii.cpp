class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>vec;
        for(char ch:s){
            if(!vec.empty() && vec.back().first==ch){
                vec.back().second++;
                if (vec.back().second==k){
                vec.pop_back();
            }
            }
            else{
                vec.push_back({ch,1});
            }
        }

        string ans="";
        for(auto a :vec){
            ans.append(a.second, a.first);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna