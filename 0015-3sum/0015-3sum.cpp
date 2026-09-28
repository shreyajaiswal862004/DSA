class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
           if(i>0 && nums[i]==nums[i-1]) continue;

            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && k<n-1 && nums[k]==nums[k+1]) k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else j++; 
            }
        }
        return ans;
    }
};