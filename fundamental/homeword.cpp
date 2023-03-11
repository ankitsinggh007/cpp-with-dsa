// ////////////////////////////////
// 1Q print all odd no.from 1 to n (including both)

#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "give me a number and i will print all no. from 1 to that number"
       << endl;
  cin >> a;
  for (int i = 0; i <= a; i++) {
    if (i % 2 != 0) {
      cout << i << endl;
    }
  }
  return 0;
}