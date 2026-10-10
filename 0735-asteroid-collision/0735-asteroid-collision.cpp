

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        
        stack<int> stk;
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<n; i++){

            // current (-ve) keeps destroying smaller +ve tops
            while((!stk.empty()) && (stk.top() > 0 && nums[i] < 0) && (stk.top() < abs(nums[i]))){ 
                stk.pop();
            }

            // collision still pending: top is +ve, current is -ve, and top >= current
            if(!stk.empty() && stk.top() > 0 && nums[i] < 0){
                if(stk.top() == abs(nums[i])){
                    stk.pop();      // both destroyed
                }
                // else top is bigger, current destroyed, do nothing
            }
            else{
                stk.push(nums[i]);  // no collision, current survives
            }
        }

        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};