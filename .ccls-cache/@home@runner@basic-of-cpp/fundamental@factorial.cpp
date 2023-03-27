#include <iostream>
using namespace std;
// recursion

// find factorialof n?
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int Exponant(int n, int i) {
  if(i==0) return 1;
  return n*Exponant(n,i-1);
}
void PrintCount(int n){
  cout<<n;
  
  if(n==1) return;
  return PrintCount(n-1);
}
int PrintFibonacci(int n){
  if(n==0|n==1) return n;
  else return PrintFibonacci(n-1)+PrintFibonacci(n-2);
}
int main() {
  int n, i;
  cout << "Provide n and i" << endl;
  cin >> n ;
  // cout<<factorial(n)<<endl;
  // cout << Exponant(n, i) << endl;
  // PrintCount(n);
  cout<<PrintFibonacci(n);
}