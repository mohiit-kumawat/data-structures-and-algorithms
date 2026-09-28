class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int left = 0;
        int right = nums.size()-1;

        while(left <= right)
        {
            if(nums[left] == 0){
                swap(nums[i], nums[left]);
                left++;
                i++;
            }
            else if(nums[left] == 2){
                swap(nums[left], nums[right]);
                right--;
            }
            else{
                left++;
            }
        } 
    }
};