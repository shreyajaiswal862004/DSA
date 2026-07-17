class Solution {
  public:
    int smallestSubstring(string &s) {
        // code here
        unordered_map<char,int>mpp;
        int i=0, minlen=INT_MAX;
        for(int j=0;j<s.size();j++){
            mpp[ch]++;
            if(mpp.size()==3){
                minlen=min(minlen,j-i+1);
                mpp[s[i]]--;
                if(mpp[s[i]]==0) mpp.erase(mpp[ch]);
                i++;
            }
        }
        return minlen;
    }
};


