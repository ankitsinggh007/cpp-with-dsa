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
int main() {
  int n, i;
  cout << "Provide n and i" << endl;
  cin >> n >> i;
  // cout<<factorial(n)<<endl;
  cout << Exponant(n, i) << endl;
}