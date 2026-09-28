class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,maxcount=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
                maxcount=max(maxcount,cnt);
            }
            else if(s[i]==')'){
                cnt--;
            }
        }
        return maxcount;
    }
};