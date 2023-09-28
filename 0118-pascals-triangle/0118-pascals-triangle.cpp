class Solution {
public:
    
    int ncr(int n, int r){
        
        // if(n == 0 ) return 1;
        
        long long ans =1;;
        for(int i = 0; i<r; i++){
            ans = ans * (n-i);
            ans = ans / (i +1);
        }
        return ans;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 0; i < numRows; i++){
            vector<int>temp;
            for(int j = 0; j <i+1; j++){
                temp.push_back(ncr(i,j));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};