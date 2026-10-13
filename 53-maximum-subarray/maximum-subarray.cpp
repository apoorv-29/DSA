class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algo linear time complexity O(n)
        int currentsum=0;
        int maxsum= INT_MIN;
        for (int value: nums){
            currentsum += value;
            maxsum = max (currentsum, maxsum);
            if (currentsum<0){
                currentsum =0;
            }
        }
        return maxsum;
    }
};