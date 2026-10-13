class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int maxpro = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int value = nums[i];

            if (value < 0) {
                swap(currMax, currMin);
            }

            currMax = max(value, currMax * value);
            currMin = min(value, currMin * value);

            maxpro = max(maxpro, currMax);
        }

        return maxpro;
    }
};