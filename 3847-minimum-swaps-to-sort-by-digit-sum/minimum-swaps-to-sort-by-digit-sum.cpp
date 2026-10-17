class Solution {
public:
int getDigitSum(int num){
    int sum=0;
    while (num>0){
        sum+= (num%10);
        num/=10;
    }
    return sum;

}
    int minSwaps(vector<int>& nums) {
        int n= nums.size();
        vector <int> afterSorted(nums);
        auto lambda= [&] (int num1, int num2){
            int num1Digitsum= getDigitSum(num1);
            int num2Digitsum= getDigitSum(num2);
             if (num1Digitsum != num2Digitsum){
                return num1Digitsum < num2Digitsum;
             }
             return num1<num2;
        };

        sort (begin(afterSorted), end(afterSorted), lambda);
        unordered_map <int,int> valtoindex;
        for (int i=0;i<n;i++){
            valtoindex[nums[i]]=i;
        }
        int swapcount=0;
        for (int i=0; i<n; i++){
            int expectedval= afterSorted[i];
            int currVal= nums[i];
            if (expectedval==currVal) continue;
            int idx = valtoindex[expectedval];
            nums[i]= expectedval;
            nums[idx]= currVal;
            valtoindex[expectedval]= i;
            valtoindex[currVal]= idx;
            swapcount++;
        }
        return swapcount;

        
    }
};