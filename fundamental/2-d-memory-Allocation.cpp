
// #include <iostream>
// using namespace std;
// void getValue(int **p, int n, int m) {

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       cin >> p[i][j];
//     }
//   }
// }
// void printValue(int **p, int n, int m) {

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//       cout << p[i][j];
//     }
//     cout<<endl;
//   }
// }
// int main() {
//   int n, m;
//   cout << "Provide me size of row in an array" << endl;
//   cin >> n;
//   cout << "Provide me size of col in an array" << endl;
//   cin >> m;

//   int **arr = new int *[n];
//   for (int i = 0; i < n; i++) {
//     arr[i] = new int[m];
//   }
//   cout << "Provide value";
//   getValue(arr, n, m);
//   printValue(arr, n, m);
// }