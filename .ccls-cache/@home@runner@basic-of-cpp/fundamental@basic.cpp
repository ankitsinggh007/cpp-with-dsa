#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int ans) {
  cout << "passed value" << a << " " << ans;
  int sum = max(a, ans) % min(a, ans);
  while (sum != 0) {
    sum = sum % min(a, ans);
  }
  return sum;
}
int advancedGcd(int a, string b) {

  int ans = 0;
  cout << b << " " << stoi(b);
  for (int i = b.size() - 1, j = 0; i >= 0; i--, j++) {
    ans = b[i] * pow(10, j);
  }
  // return ans;
  return gcd(a, ans);
}

int main() {

  cout << "provide me a no. and i will giv you a sum of it" << endl;

  int a;
  cin >> a;
  string s;
  cin >> s;
  int j = advancedGcd(a, s);
}