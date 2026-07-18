class Solution {
  public:
    int smallestSubstring(string &s) {
        // code here
        unordered_map<char,int>mpp;
        int i=0, minlen=INT_MAX;
        for(int j=0;j<s.size();j++){
            mpp[s[j]]++;
            while(mpp.size()==3){
                minlen=min(minlen,j-i+1);
                mpp[s[i]]--;
                if(mpp[s[i]]==0) mpp.erase(s[i]);
                i++;
            }
        }
        return (minlen==INT_MAX) ? -1:minlen ;
    }
};
