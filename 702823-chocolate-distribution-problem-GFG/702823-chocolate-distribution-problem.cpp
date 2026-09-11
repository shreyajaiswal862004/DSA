class Solution {
	public:
	int findMinDiff(vector<int>& a, int m) {
		// code here
		sort(a.begin(), a.end());
		int n=a.size();
		
		int min=INT_MAX;
		for(int i=0;i+m-1<n;i++){
		    int d=a[i+m-1]-a[i];
		    if(d<min) min=d;
		}
		return min;
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna