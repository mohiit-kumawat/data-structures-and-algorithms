class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.length();
        stack<char> st;

        int i = n - 1;

        while (i >= 0) {

            // Skip spaces
            while (i >= 0 && s[i] == ' ')
                i--;

            if (i < 0)
                break;

            // Read one word
            while (i >= 0 && s[i] != ' ') {
                st.push(s[i]);
                i--;
            }

            // Add separator between words
            if (!ans.empty())
                ans += ' ';

            // Build the word
            while (!st.empty()) {
                ans += st.top();
                st.pop();
            }
        }

        return ans;
    }
};