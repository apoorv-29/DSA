
    class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
for (int x = 0; x < n; x++) {
     bool isSorted = true;
for (int i = 0; i < n; i++) {
    int current = nums[(i + x) % n];
int next = nums[(i + 1 + x) % n];
 if (current > next) {
                    isSorted = false;
                    break;
                }
            }
            if (isSorted) {
                return true;
            }
        }
 return false;
    }
};
    
