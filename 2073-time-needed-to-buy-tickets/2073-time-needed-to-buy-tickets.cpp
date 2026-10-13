class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int cnt=0;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }

        while(!q.empty()){
            int a=q.front();
            q.pop();
            tickets[a]--;
            cnt++;
            if(tickets[k]==0) return cnt;
            else if(tickets[a]!=0) q.push(a);
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna