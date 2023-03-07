class Solution {
public:
    bool isPalindrome(int x) {
        int duplicate=x;
        long rev=0;
        while(x>0){
            int lastdigit=x%10;
            x=x/10;
            rev=rev*10+lastdigit;

        }
        if(rev==duplicate){
            return true;

        }
        else
          return false;

        
    }
};
