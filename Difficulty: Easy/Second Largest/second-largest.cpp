class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        sort (begin(arr),end(arr), greater<int>());
        for (int i=0;i<arr.size();i++){
            if (arr[i]<arr[0]){
                return arr[i];
            }
            }
            return -1;
        }
        
    
};