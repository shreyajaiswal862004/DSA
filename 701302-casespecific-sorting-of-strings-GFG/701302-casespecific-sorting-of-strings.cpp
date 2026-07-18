class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<char>vec1;
        vector<char>vec2;
        
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                vec1.push_back(s[i]);
            }
            else{
                vec2.push_back(s[i]);
            }
        }
        
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        int idx1=0,idx2=0,n1=vec1.size(),n2=vec2.size();
        string ans="";
        for(char ch:s){
            if(islower(ch) && idx1<n1){
                ans.push_back(vec1[idx1++]);
            }
            else{
                ans.push_back(vec2[idx2++]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna