class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        // code here
        int x=a.size(), y=b.size(), z=c.size();
        int i=0, j=0, k=0;
        vector<int>ans;
        while(i<x && j<y && k<z){
            if(a[i]==b[j]&& b[j]==c[k]) {
                if(ans.empty() || ans.back()!=a[i])
                    ans.push_back(a[i]);
                    
                i++;
                j++;
                k++;
            }
            else if(a[i]<=b[j] && a[i]<=c[k]) i++;
            else if(b[j]<=a[i] && b[j]<=c[k]) j++;
            else if(c[k]<=a[i] && c[k]<=b[j]) k++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna