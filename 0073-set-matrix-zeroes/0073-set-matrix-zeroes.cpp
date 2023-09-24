class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>stc;
        unordered_set<int>str;
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j =0;j < matrix[0].size(); j ++){
                if(matrix[i][j] == 0){stc.insert(j); str.insert(i);}
            }
        }
         for(int i = 0; i < matrix.size(); i++){
            for(int j =0;j < matrix[0].size(); j ++){
                if(str.find(i) != str.end()){
                    matrix[i][j] = 0;
                }
                if(stc.find(j) != stc.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};