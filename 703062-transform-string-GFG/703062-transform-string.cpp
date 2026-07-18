class Solution {
  public:
    int transform(string &s1, string &s2) {
        // code here
        int n1 = s1.size(), n2 = s2.size();
        if (n1 != n2) return -1;
        
       vector<int>freq(128,0);
       int n=s1.size();
       for(int i=0;i<n;i++){
           freq[s1[i]]++;
           freq[s2[i]]--;
       }
       
       for(auto f:freq){
           if(f!=0) return -1;
       }
       
       int i=n1-1,j=n1-1,count=0;
       while(i>=0){
           if(s1[i]==s2[j]){
               i--;
               j--;
           }
           else{
                count++;
                i--;
           }
       }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna