class Solution {
public:
    int beautySum(string s) {
        
        int ans = 0;

        

        int n = s.length();

        for(int i=0; i<n; i++){

            int freq[26] = {0};

            for(int j=i; j<n; j++){

                freq[s[j] - 'a']++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                
                for(int i=0; i<26; i++){

                    if(freq[i] > 0){
                        mini = min(freq[i], mini);
                        maxi = max(freq[i], maxi);
                    }
                }
                ans += maxi - mini;
            }
        }

        return ans;
    }
};