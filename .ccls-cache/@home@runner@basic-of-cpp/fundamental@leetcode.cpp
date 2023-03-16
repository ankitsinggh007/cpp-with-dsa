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
// The complement of an integer is the integer you get when you flip all the 0's
// to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010"
// which is the integer 2. Given an integer n, return its complement. class
// Solution { public:
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

// int main(){

//   int arg1,arg2;
//   char op;
//   cout<<"provide arg1,arg2,operation to be perfrom respectively "<<endl;
// cin>>arg1;
// cin>>arg2;
// cin>>op;
//   switch(op){
//     case '*' : cout << arg1 * arg2;
//                 break;
//     case '-' : cout << arg1 - arg2;
//                 break;

//     case '+' : cout << arg1 + arg2;
//                 break;

//     case '/' : cout << arg1 / arg2;
//                 break;

//     case '%' : cout << arg1 % arg2;
//                 break;
//   default:cout<<"provide correct operation";
//     }
// }
// reverse an array based on given array;
// void getValue(int array[], int size) {

//   for (int i = 0; i < size; i++) {

//     cin >> array[i];
//   }
//   return;
// }
// void reverse(int aray[],int size){
//   for(int i=0,j=size-1;i<size/2 ||j>size/2;i++,j--){
//     int temp=aray[i];
//   // cout<<temp;

//     aray[i]=aray[j];
//     aray[j]=temp;

//   }
//   return;
// }
// int main() {
//   int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);
// for (int i = 0; i < size; i++) {
//     cout << givenArray[i] << " ";
//   }
//   reverse(givenArray,size);
//   for (int i = 0; i < size; i++) {
//     cout << givenArray[i] << " ";
//   }
// }
// void getValue(int array[], int size) {

//   for (int i = 0; i < size; i++) {

//     cin >> array[i];
//   }
//   return;
// }
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << array[i] << " ";
//   }
// }

// void swapAlternate(int array[], int size) {

//   for (int i = 0; i < size - 1; i += 2) {
//     int temp = array[i];
//     array[i] = array[i + 1];
//     array[i + 1] = temp;
//   }
// }
// swap alternate;

// int main() {
//   int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);

//   printArray(givenArray, size);
//   cout << endl;
//   swapAlternate(givenArray, size);
//   printArray(givenArray, size);
// }
// int findDuplicate(vector<int> &arr)
// {
//   int N=arr.size()-1;
//   int ans=0;
//   for(int i=0,j=0;i<=N;i++,j++){
//     ans=ans^arr[i]^j;
//   }
//   return ans;

// }
// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int>
// &arr2,
//                                   int m) {

//   vector<int> answer;

//   int i = 0, j = 0;
//   while (i < n && j < m) {
//     if (arr1[i] < arr2[j]) {
//       i++;
//     } else if (arr1[i] > arr2[j]) {
//       j++;
//     } else if (arr1[i] == arr2[j]) {
//       answer.push_back(arr1[i]);
//       i++;
//       j++;
//     }
//   }
//   return answer;
// }

// Implement binary search and find is k present or not
// int findNumber(int arr[],int size,int k){

//   int start=0;
//   int end=size-1;
//   while(start<=end){
//     int mid=(start+end)/2 ;
//     if(arr[mid]==k){
//       return mid;
//     }
//     else if(arr[mid]>k){
//       end=mid-1;
//     }
//     else if(arr[mid]<k){
//       start=mid+1;
//     }
//   }
//   return -1;

// }
// int main(){
//  int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);
// cout<<"Wich no. to be found"<<endl;
//   int k ;
//   cin>>k;
//   printArray(givenArray,size);
//   cout<<k;
//   int j=findNumber(givenArray,size,k);

// cout<<j;

// }
// int firstOccurense(int arr[], int size, int k) {

//   int first = -1;
//   int start = 0, end = size - 1;
//   while (start <= end) {

//     int mid = (start + end) / 2;
//     if (arr[mid] == k) {
//       first = mid;
//       start = 0;
//       end = mid - 1;
//     } else if (arr[mid] > k) {
//       end = mid - 1;
//     } else if (arr[mid] < k) {
//       start = mid + 1;
//     }
//   }
//   return first;
// }
// int secondOccurense(int arr[], int size, int k) {

//   int first = -1;
//   int start = 0, end = size - 1;
//   while (start <= end) {

//     int mid = (start + end) / 2;
//     if (arr[mid] == k) {
//       first = mid;
//       start = 0;
//       start = mid + 1;
//     } else if (arr[mid] > k) {
//       end = mid - 1;
//     } else if (arr[mid] < k) {
//       start = mid + 1;
//     }
//   }
//   return first;
// }
// int main() {

//   int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);
//   cout << "Wich no. to be found" << endl;
//   int k;
//   cin >> k;
//   printArray(givenArray, size);
// }
// class Solution {
// public:
//   int mySqrt(int x) {

//     int s = 0, e = x;
//     int mid = -1;
//     while (s <= e) {
//       int mid = s + (e - s) / 2;

//       if (pow(mid, 2) == x) {
//         return mid;
//       } else if (pow(mid, 2) > x) {
//         e = mid - 1;
//       } else if (pow(mid, 2) < x) {
//         s = mid + 1;
//       }
//     }
//     return e;
//   }
// };
void getValue(int array[], int size) {

  for (int i = 0; i < size; i++) {

    cin >> array[i];
  }
  return;
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
}