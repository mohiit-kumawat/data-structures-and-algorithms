class Solution {
public:

    void solve(vector<int>& c, int target, int index,
        vector<int>& temp, vector<vector<int>>& ans) {

    if (target == 0) {
        ans.push_back(temp);
        return;
    }

     if (target < 0 || index >= c.size()) return;
     
    // include:
    temp.push_back(c[index]);
    solve(c, target-c[index], index+1, temp, ans);

    // exclude:
    temp.pop_back();
    int next = index + 1;
    while(next < c.size() && c[next] == c[index])  next++;
    solve(c, target, next, temp, ans);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<int> temp;
    vector<vector<int>> ans;
    solve(candidates, target, 0, temp, ans);
    return ans;
}
};