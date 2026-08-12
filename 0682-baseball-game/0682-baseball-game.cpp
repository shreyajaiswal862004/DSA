class Solution {
bool is_number(string &s){
    if(s.empty()) return false;
    int i=(s[0]=='-')?1:0;
    if(i==s.size()) return false;
    for(;i<s.size();i++){
        if(!isdigit(s[i])) return false;
    }
    return true;
}
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto it:operations){
            if(is_number(it)){
                st.push(stoi(it));
            }
            else if(it=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c=a+b;
                st.push(b);
                st.push(a);
                st.push(c);
            }
            else if(it=="C"){
                st.pop();
            }
            else if(it=="D"){
                int x=st.top();
                int y=x*2;
                st.push(y);
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna