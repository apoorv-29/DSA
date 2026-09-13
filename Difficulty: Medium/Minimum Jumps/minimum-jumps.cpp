class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();

        // If array contains only 1 element, we are already at the destination
        if (n <= 1)
            return 0;

        // If the first element is 0, we can never jump forward
        if (arr[0] == 0)
            return -1;

        int maxReach = arr[0];
        int step = arr[0];
        int jump = 1;

        for (int i = 1; i < n; i++) {
            // Reached the destination
            if (i == n - 1)
                return jump;

            // Update the furthest reachable index
            maxReach = max(maxReach, i + arr[i]);

            step--;

            // When no steps are left for current jump
            if (step == 0) {
                jump++;

                // Cannot move further forward
                if (i >= maxReach)
                    return -1;

                step = maxReach - i;
            }
        }

        return -1;
    }
};