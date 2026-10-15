class Solution {
public:
    int sumCounts(vector<int>& nums) {
    int result = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        unordered_set<int> store; 
        for (int j = i; j < n; j++) {
            store.insert(nums[j]); 
            result += store.size() * store.size();
        }
    }
    
    return result;
        
    }
};