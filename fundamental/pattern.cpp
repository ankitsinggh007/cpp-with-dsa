#include <iostream>
using namespace std;
// 3Q print patter for n such that it goes from 1 to n in +x and +y direction
int main() {

  cout << "let me print a pattern for you just give me the no. " << endl;
  int n;

  cin >> n;

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}