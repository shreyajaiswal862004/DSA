class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int i=0, j=0, maxlen=0;
        int n=s.size();
        while(j<n){
            char ch=s[j];
            if(mpp.find(ch)!=mpp.end() && mpp[ch]>=i){
                i = mpp[ch]+1;
            }
            mpp[ch]=j;
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};