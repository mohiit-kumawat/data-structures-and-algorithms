class Solution {
public:

    void solve(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>>& ans) {
    if (index == nums.size()) {
        ans.push_back(temp);
        return;
    }

    temp.push_back(nums[index]);
    solve(nums, index + 1, temp, ans);
    temp.pop_back();

    int next = index + 1;
    while (next < nums.size() && nums[next] == nums[index]) next++;
    solve(nums, next, temp, ans);
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