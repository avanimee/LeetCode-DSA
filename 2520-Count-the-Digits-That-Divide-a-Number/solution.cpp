class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int rev=0;

        while(x>0){
            int digit=x%10;
            int rev=rev*10+digit;
            x=x/10;

        }
        return original==rev;
    }
};