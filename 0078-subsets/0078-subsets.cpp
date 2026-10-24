class Solution {
public:

    void solve(vector<int>& nums, int index, vector<int>& temp, vector<vector<int>>& ans){

        // Base case: when we got out of bound AND when I get out of bound mera answer bhi form ho jayega
        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }

        // include:
        int element = nums[index];
        temp.push_back(element);
        solve(nums, index+1, temp, ans);

        // exclude + backtrack:
        temp.pop_back();
        solve(nums, index+1, temp, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
    
        // kis kiska need padhne waala hai?
        // 1. temp ka jho curr subset store krega!
        // 2. ans ka jho har possible set store krega!
        // 3. index ?? rakh leta hu, inc/exc me use kar lunga!
        //  Baaki on the way kar lenge!

        int index = 0;
        vector<int> temp;
        vector<vector<int>> ans;

        solve(nums, index, temp, ans);

        return ans;
    }
};