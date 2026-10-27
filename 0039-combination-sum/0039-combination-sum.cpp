class Solution {
public:

    void solve(vector<int>& candidates, int& target, int index, vector<int>& temp, vector<vector<int>>& ans, int& sum){

        // base case 01: when we get pur ans:
        if(sum == target){
            ans.push_back(temp);
            return;
        }

        // base acse 02: not getting answwer:
        if(sum > target || index >= candidates.size()){
            return;
        }

        // include case:
        sum += candidates[index];
        temp.push_back(candidates[index]);
        solve(candidates, target, index, temp, ans, sum);

        // exclude: "backtrack before exclude!"
        sum -= candidates[index];
        temp.pop_back();
        solve(candidates, target, index+1, temp, ans, sum);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int sum = 0;
        int index = 0;
        vector<int> temp;
        vector<vector<int>> ans;

        solve(candidates, target, index, temp, ans, sum);

        return ans;
    }
};