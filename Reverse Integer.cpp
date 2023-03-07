class Solution {                      
public:
    int reverse(int x) {
        long r=0;      // decleare r 
        while(x){
         r=r*10+x%10; // find reminder and add its to r
         x=x/10;     // Update the value of x
        }
        if(r>INT_MAX || r<INT_MIN) return 0; // check 32 bit range 
        return int(r);
    }
}; 

// class Solution {
// public:
//     int reverse(int x) {
//         int rev=0;
//         while(x>0)
//         {
//             int lastdigit=x%10;
            
//             rev=rev*10+lastdigit;
//                x=x/10;
//             if(rev>INT_MAX/10 && rev<INT_MIN/10){
//                 return 0;
//             }
            
         
//         }
//         return rev;

//         }
        
// };
