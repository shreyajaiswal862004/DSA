class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto x:asteroids){
            bool destroyed=false;
            while(!st.empty() && st.top()>0 && x<0){
                if(st.top()<-x){
                    st.pop();
                }
                else if(st.top()==-x){
                    st.pop();
                    destroyed=true;
                    break;
                }
                else{
                    destroyed=true;
                    break;
                }
            }
            if(!destroyed){
                    st.push(x);
            }
        }

        vector<int>ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna