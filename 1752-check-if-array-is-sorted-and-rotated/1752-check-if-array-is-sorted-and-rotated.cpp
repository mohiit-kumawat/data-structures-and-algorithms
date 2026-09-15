class Solution {
public:
    bool check(vector<int>& nums) {

        int count = 0;
        int n = nums.size();

        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1])
                count++;
        }

        // jab last waala element, first waale se badda hoga tho ye case bhi glt hoga ma!
        if(nums[n-1] > nums[0])
            count++;

        return count <= 1;
    }
};