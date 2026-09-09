class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int top=st.top();
        st.pop();
         sortStack(st); 
         sorting(st,top);
         
    }
    
    void sorting(stack<int>&st, int x){
        if(st.empty() || (!st.empty() && st.top()<x)){
            st.push(x);
            return;
        }
        
        int temp=st.top();
        st.pop();
        sorting(st,x);
        st.push(temp);
    }
    
    
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna