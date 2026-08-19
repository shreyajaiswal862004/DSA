class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int time=0;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        while(tickets[k]){
            tickets[q.front()]--;
            if(tickets[q.front()]){
                q.push(q.front());
            }
            q.pop();
            time++;
        }
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna