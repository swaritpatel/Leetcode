class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0; 
        int high = n-1;
        while (low <= high){
            int mid = (low + high)/2;
            //identifying the left half to be sorted:
            if(arr[mid] == target) return mid;

            if(arr[low] <= arr[mid]){
                if(arr[low] <= target && target <= arr[mid]){
                    high = mid -1;
                }
                else{
                    low = mid+1;
                    
                }
            }
            
            //identifying the right half to be sorted:
            else{
                if(arr[mid] <= target && target <= arr[high]){
                    low = mid+1;
                }
                else{
                    high = mid -1;
                }
            }
            
        }
        return -1;
    }
};


