class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int sum=0 , length=0, n= arr.size();
        unordered_map<int,int>store;
        for (int i=0;i<n;i++){
            sum += arr[i];
            if (sum==k) length = max(length,i+1);
            if (store.find(sum)==store.end()) store[sum]=i;
            if (store.find(sum-k)!=store.end()){
                length= max(length, i-store[sum-k]);
        }
        }
        return length;
            
        }
        
    };
