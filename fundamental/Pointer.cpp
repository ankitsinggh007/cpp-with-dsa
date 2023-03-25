/////////////////////////////////////////////Pointer///////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
void printArray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
// int main() {
// int arr[10]={1,2,3,4,5,6};

//   int * p=arr;
//   int *q=arr+3;
//   cout<<*p<<endl<<*q<<endl<<q-p;
// }
// Refrence value

int main() {
  int i = 10;
  int &j = i;
  cout << i << endl;
  cout << j << endl;
  i++;
  j++;
  cout << i << endl;
  cout << j << endl;
}