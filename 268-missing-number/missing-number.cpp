class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int j;
        for (j=0;j<=n;j++){
        bool found = false;
        for (int i=0; i<n; i++){
            if (nums[i]==j){
                found = true;
                break;
            }
        }
            if (!found){
                return j;
            }
        }
        return -1;
        
        
    }
};