class Solution {
  public:
    int findMaxDiff(vector<int> &arr) {
        // code here
    vector<int>ls;
    vector<int>rs;
    stack<int>st;
    
    for(int i=0;i<arr.size();i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ls.push_back(0);
        }
        else{
            ls.push_back(st.top());
        }
        st.push(arr[i]);
    }
    
    while(!st.empty()){
        st.pop();
    }
        
    for(int i=arr.size()-1; i>=0; i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            rs.push_back(0);
        }
        else{
            rs.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(rs.begin(),rs.end());
    
    int diff=0;
    for(int i=0;i<arr.size();i++){
        diff=max(diff,abs(ls[i]-rs[i]));
    }
    return diff;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna