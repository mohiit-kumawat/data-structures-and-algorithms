class Solution {
public:

    void solve(vector<int>& arr, int index, vector<int>& temp, vector<vector<int>>& ans, int count, int target){

        // base case 01: jab ans milega!
        if(count <= 0){
            if(target == 0){
                ans.push_back(temp);
                return;
            }
            return;
        }

        // base case 02: jab ans nahi milega:
        if(target < 0 || index >= arr.size())
            return;

        // include:
        int element = arr[index];
        temp.push_back(element);
        solve(arr, index+1, temp, ans, count-1, target-arr[index]);

        // exclude:
        temp.pop_back();
        solve(arr, index+1, temp, ans, count, target);

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> arr(9);
        for(int i=1; i<=9; i++){
            arr[i-1] = i;
        }

        int index = 0;
        vector<int> temp;
        vector<vector<int>> ans;

        solve(arr, index, temp, ans, k, n);

        return ans;
    }
};