class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // matrix to store answer
        vector<vector<int>> result(numRows);

        for(int i=0; i<numRows; i++){

            // meko ek naya vector banaana hai, jis size 1 jyada hoga i.e. (i+1),
            // and me starting me hi usse 1 bhar dunga.. taaki first or last travel na krna padde!
            result[i] = vector<int>(i+1, 1);

            // aab j kaha se kaah tk jayega!!
            // start hoga 1st index se (zero se nahi)
            // kyoki 0th index par always 1 hai
            // same with last index

            for(int j=1; j<=i-1; j++){
                // aab mrko value update krna hai:
                // UPAR JAO: result[i-1][j]
                // UPAR JAANE LEFT: result[i-1][j-1]
                result[i][j] = result[i-1][j] + result[i-1][j-1];
            }
        }
        return result;
    }
};