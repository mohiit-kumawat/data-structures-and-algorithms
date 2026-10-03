class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> map;
        int n = nums.size();

        for(int i=0; i<n; i++){

            int rem = target - nums[i];
            if(map.find(rem) != map.end()){
                return {map[rem], i};
            }
            map[nums[i]] = i;
        }
        return {-1,-1};
    }
};