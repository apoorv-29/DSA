class Solution {
public:
    bool checkString(string s) {
        int check=0;
        for (char ch: s){
            if (ch== 'b'){
                check =1;
            }
            else if (ch == 'a' && check){
                return false;
            }
        }
        return true;
        
    }
};