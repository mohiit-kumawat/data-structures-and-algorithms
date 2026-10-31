class Solution {
public:

    void solve(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>>& ans){

        // base case: jab ans milega:
        ans.push_back(temp);  

        for (int i = index; i < nums.size(); i++) {
        if (i > index && nums[i] == nums[i-1]) continue;   // skip duplicate at this level

        temp.push_back(nums[i]);
        solve(nums, i + 1, temp, ans);   // i+1: use each element once
        temp.pop_back();
    }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int index = 0;
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        solve(nums, index, temp, ans);

        return ans;
    }
};