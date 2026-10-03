class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int mid = i + 1;
            int end = n - 1;

            while(mid < end) {

                int sum = nums[i] + nums[mid] + nums[end];

                if(sum == 0) {

                    ans.push_back({nums[i], nums[mid], nums[end]});

                    mid++;
                    end--;

                    // Skip duplicate middle elements
                    while(mid < end && nums[mid] == nums[mid - 1])
                        mid++;

                    // // Skip duplicate end elements
                    // while(mid < end && nums[end] == nums[end + 1])
                    //     end--;
                }
                else if(sum < 0) {
                    mid++;
                }
                else {
                    end--;
                }
            }
        }

        return ans;
    }
};