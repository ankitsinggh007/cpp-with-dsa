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
// Given an integer n, return true if it is a power of two. Otherwise, return
// false.

// An integer n is a power of two, if there exists an integer x such that n ==
// 2x. class Solution { public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;

// while(n!=0){

//     if(!(n&1){
//         return false;
//     }
//     n=n>>1;

// }
// return true;

//     }
// };
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.
// class Solution {
// public:
//     int bitwiseComplement(int n) {

// if(n==0) return 1;

//     int mask=0,x=n,count=0;
//             while(x!=0){

//                 count++;
                
//                 x=x>>1;


//             }
//             // return count;
//             int j=0;
//             while(count>=1){
//                 mask=mask<<1;

//                 mask=mask|1;
//                 count--;
//                 j++;
//             }
//             return ~n&mask ;

//         }
// };
// create calc having +/-/%///* operation can perform;
#include <iostream>
using namespace std; 
 
int main(){

  int arg1,arg2;
  char op;
  cout<<"provide arg1,arg2,operation to be perfrom respectively "<<endl;
cin>>arg1;  
cin>>arg2;  
cin>>op;
  switch(op){
    case '*' : cout << arg1 * arg2;
                break;
    case '-' : cout << arg1 - arg2;
                break;
    
    case '+' : cout << arg1 + arg2;
                break;
    
    case '/' : cout << arg1 / arg2;
                break;
    
    case '%' : cout << arg1 % arg2;
                break;
  default:cout<<"provide correct operation";
    }
}
