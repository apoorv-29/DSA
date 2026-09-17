
class Solution {
  public:
    int largest(vector<int> &arr) {
     
     int max_value= arr[0];
     for (int i=0; i<arr.size(); i++){
         if (arr[i]>max_value){
             max_value=arr[i];
         }
     }
       return max_value; 
        
    }
};
