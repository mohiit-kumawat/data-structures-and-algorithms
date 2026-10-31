class Solution {
public:

     void solve(vector<int>& c, int target, int start,
           vector<int>& temp, vector<vector<int>>& ans) {

    if (target == 0) {
        ans.push_back(temp);
        return;
    }

    for (int i = start; i < c.size(); i++) {
        if (i > start && c[i] == c[i-1]) continue;   // skip duplicate at this level
        if (c[i] > target) break;                    // sorted, so the rest are too big

        temp.push_back(c[i]);
        solve(c, target - c[i], i + 1, temp, ans);   // i+1: use each element once
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<int> temp;
    vector<vector<int>> ans;
    solve(candidates, target, 0, temp, ans);
    return ans;
}
};