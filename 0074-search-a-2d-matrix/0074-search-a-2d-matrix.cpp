class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //using binary search asssuming it a linear array
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (n*m)-1;
    
        while (low <= high){
            int middle = low + (high-low)/2;
            if(matrix[middle/m][middle%m] == target){
                return true;
            }
            if(matrix[middle/m][middle%m] < target){
                low = middle+1;
            }
            else{
                high = middle-1;
            }
            
        }
        return false;
        
        
    }
};