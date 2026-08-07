class Solution {
private:
vector<int>pre(vector<int>&height, int n){
    vector<int>prefix(n);
    prefix[0]=height[0];
    for(int i=1;i<height.size();i++){
        prefix[i]=max(prefix[i-1],height[i]);
    }
    return prefix;
}

vector<int>suf(vector<int>&height, int n){
    vector<int>suffix(n);
    suffix[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=max(suffix[i+1],height[i]);
    }
    return suffix;
}


public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefix;
        vector<int>suffix;
        prefix=pre(height,n);
        suffix=suf(height,n);
        int total=0;
        for(int i=0;i<height.size();i++){
            if(height[i]<prefix[i] && height[i]<suffix[i]){
                total+=(min(prefix[i],suffix[i])-height[i]);
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna