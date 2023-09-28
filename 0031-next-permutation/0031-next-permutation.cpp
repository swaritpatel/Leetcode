class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool b =  next_permutation(nums.begin(),nums.end());
        if(b == false){
            sort(nums.begin(),nums.end());
        }
    }
};