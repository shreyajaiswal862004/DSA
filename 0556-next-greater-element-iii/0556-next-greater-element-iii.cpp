class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>ans;
        int a=n;
        while(a){
            int b=a%10;
            ans.push_back(b);
            a=a/10;
        }

        reverse(ans.begin(),ans.end());

        int idx=-1;
        for(int i=ans.size()-2;i>=0;i--){
            if(ans[i]<ans[i+1]){
                idx=i;
                break;
            }
        }

        if(idx==-1) return -1;

        for(int i=ans.size()-1; i>idx; i--){
            if(ans[i]>ans[idx]){
                swap(ans[i],ans[idx]);
                break;
            }
        }

        reverse(ans.begin()+idx+1, ans.end());

        long long temp=0;
        for(int i=0;i<ans.size();i++){
            temp=temp*10+ans[i];
        }

        if(temp>INT_MAX) return -1;
        return temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna