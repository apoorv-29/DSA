class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int j;
        for (j=0;j<=n;j++){
            bool milgaya = false;
            for (int i=0; i<n; i++){
                if (nums[i]==j){
                    milgaya = true;
                    break;
                }
            }
            if (!milgaya){
                return j;
            }
            
        }
        return -1;
        
    }
};