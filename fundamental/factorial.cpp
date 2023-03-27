// #include <iostream>
// using namespace std;
// // recursion

// // find factorialof n?
// int factorial(int n) {
//   if (n == 0 || n == 1) {
//     return 1;
//   } else {
//     return n * factorial(n - 1);
//   }
// }
// int Exponant(int n, int i) {
//   if (i == 0)
//     return 1;
//   return n * Exponant(n, i - 1);
// }
// void PrintCount(int n) {
//   cout << n;

//   if (n == 1)
//     return;
//   return PrintCount(n - 1);
// }
// int PrintFibonacci(int n) {
//   if (n == 0 | n == 1)
//     return n;
//   else
//     return PrintFibonacci(n - 1) + PrintFibonacci(n - 2);
// }
// int main() {
//   int n, i;
//   cout << "Provide n and i" << endl;
//   cin >> n;
//   /* cout<<factorial(n)<<endl;
//    cout << Exponant(n, i) << endl;
//    PrintCount(n);
//    cout<<PrintFibonacci(n);
//    #include <bits/stdc++.h>

//  int countDistinctWays(int nStairs) {
//      if(nStairs==1||nStairs==2) return nStairs  ;
//      return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);*/
// }
// }
// write a recursive function to return sumof given no. digit
// Write a recursive function to find the greatest common divisor (GCD) of two
// numbers Write a recursive function to print all the permutations of a string
#include <iostream>
using namespace std;

int SUmOfDigit(int n) {
  if (n == 0)
    return 0;
  int temp = n % 10;
  n = n / 10;
  return SUmOfDigit(n) + temp;
}
int GCD(int n, int m) {
  if (n == 0)
    return m;
  if (m == 0)
    return n;
  if (m >= n)
    return GCD(m % n, n);
  else
    return GCD(m, n % m);
}
bool isSorted(int arr[], int n) {
  if (n == 0 || n == 1)
    return true;
  if (arr[0] > arr[1])
    return false;
  return isSorted(arr + 1, n - 1);
}
int main() {

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << isSorted(arr, n);

  // cout<< SUmOfDigit(n,m);
  // cout<<GCD(m,n);
}