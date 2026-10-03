class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<n-2; i++){
            
            // i ka duplicate check!
            if(i>0 && nums[i] == nums[i-1])
                continue;

            // in no duplicay in i --> set our j and k pointer
            int j = i+1;
            int k = n-1;

            while(j < k){
                
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    
                    while(j < k && nums[j] == nums[j-1])
                        j++;
    
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    j++;
                }
            }
                
        }
        
        return ans;
    }
};
//  {-1, -1}
// return {x.first, x.second}
//  ans.push_back({})