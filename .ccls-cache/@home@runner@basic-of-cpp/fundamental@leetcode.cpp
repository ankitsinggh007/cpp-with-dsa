// Reverse int
// class Solution {
// public:
//     int reverse(int x) {

//         int ans=0;
//         int i=0;
//         while(x!=0){

//             int LastDigit=x%10;
//             x=x/10;
//             if(ans>INT_MAX/10 || ans<INT_MIN/10 ){
//                 return 0;

//             }
//             else{
//             ans=ans*10+LastDigit;
//             i++;

//             }

//         }
//         return ans;
//     }
// };
// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;

while(n!=0){

    if(!(n&1){
        return false;
    }
    n=n>>1;
    
}
return true;
        
    }
};