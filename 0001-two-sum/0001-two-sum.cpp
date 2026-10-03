class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        int i = 0;
        int j = n-1;
        vector<pair<int,int>> ans(n);
        for(int i=0; i<n; i++){
            ans[i]= {nums[i], i};
        }
        sort(ans.begin(), ans.end());

        while(i<j){

            int sum = ans[i].first + ans[j].first;

            if(sum == target){
                return {ans[i].second, ans[j].second};
            }
            else if( sum > target){
                j--;
            }
            else{
                i++;
            }
        }
        return {-1,-1};
    }
};