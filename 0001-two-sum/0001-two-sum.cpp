class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sum = 0;
        int n = nums.size();
        unordered_map<int, int> map;

        for(int i=0; i<n; i++){

            int rem = target - nums[i];
            if(map.find(rem) != map.end()){
                return{map[rem], i};
            }

            // nahi hua mtlb map me pushh kardo
            map[nums[i]] = i;
        }
        return {-1, -1};
    }
};