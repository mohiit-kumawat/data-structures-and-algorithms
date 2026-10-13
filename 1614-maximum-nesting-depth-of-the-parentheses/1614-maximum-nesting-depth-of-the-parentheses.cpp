class Solution {
public:
    int maxDepth(string s) {
        
        int ans = 0;
        int depth = 0;

        for(auto ch: s){

            if(ch == '('){
                depth++;
                ans = max(depth,ans);
            }

            else if( ch == ')'){
                depth--;
            }
        }
        return ans;
    }
};