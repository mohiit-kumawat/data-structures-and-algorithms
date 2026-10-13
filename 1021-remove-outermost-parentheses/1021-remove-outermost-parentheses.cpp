class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans;
        int open = 0;
        int close = 0;
        int n = s.length();
        
        string temp;


        for(int i=0; i<n; i++){

            if(s[i] == '(')
                open++;
            else
                close++;

            temp += s[i];
            
            if(open == close){

                ans += temp.substr(1, temp.size() - 2);
                temp.clear();
                open = 0;
                close = 0;
            }

        }

        return ans;
    }
};