class Solution {
public:
    void solve(int n, int open, int close,
               vector<string>& ans, string& temp) {

        // Base case: n pairs complete
        if (open == n && close == n) {
            ans.push_back(temp);
            return;
        }

        // Include '('
        if (open < n) {
            temp += "(";
            solve(n, open + 1, close, ans, temp);
            temp.pop_back();  // Backtracking
        }

        // Include ')'
        if (close < open) {
            temp += ")";
            solve(n, open, close + 1, ans, temp);
            temp.pop_back();  // Backtracking
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;

        solve(n, 0, 0, ans, temp);

        return ans;
    }
};