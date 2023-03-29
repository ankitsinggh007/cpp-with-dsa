// #include <bits/stdc++.h>
// using namespace std;

// bool checkPalindrome(string s)
// {
//   string strng="";
//     int i=0; int j=s.size()-1;
//     while(i<=j){
//         if((!isalnum(s[i]))||s[i]==' '){
//             i++;
//         }
//         else if((!isalnum(s[j]))||s[j]==' '){
//             j--;
//         }
//         else{

//           cout<<s[i]<<endl;
//         }

//     }

//   // cout<<"ans"<<endl<<strng;

//   return true;
// }
// int main() {
//   string name = "N2 i&nJA?a& jnI2n";

//   checkPalindrome(name);
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// void getValue(int *arr, int n) {
//   for (int i = 0; i < n; i++) {
//     cin >> arr[i];
//   }
// }
// void PrintArray(int *arr, int n) {
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
// }

// int main() {
//   int N, n;
//   cout << "How many day's are for exam" << endl;
//   cin >> N;
//   cout << "how many  chapter are there" << endl;
//   cin >> n;
//   cout << "how many time each chapter take" << endl;

//   int *arr = new int[n];
//   getValue(arr, n);
//   PrintArray(arr, n);
//   cout<<"answer"<<ayushGivesNinjatest(N, n, arr);
// }

#include <iostream>
using namespace std;

void reverse(string &s) {

  int i = 0;
  int j = s.size() - 1;
  while (i <= j) {
    swap(s[i], s[j]);
    i++;
    j--;
  }
}
void recursiceTwoPivot(string &s, int i, int j) {
  if (i >= j)
    return;
  swap(s[i], s[j]);
  cout << s << endl;
  recursiceTwoPivot(s, ++i, --j);
}
bool checkPalindrome(string &s, int i, int j) {

  if (i > j)
    return true;
  if (s[i] != s[j])
    return false;
  i++;
  j--;
  return checkPalindrome(s, i, j);
}
int exponent(int a, int b) {
  if (b == 0)
    return 1;

  return exponent(a, --b) * a;
}
void PrintArray(int *arr,int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void bubbleSort(int *arr,int n){
  int i=n;
  while(i>=0){
    for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
      swap(arr[i-1],arr[i]);
    }
  }
  PrintArray(arr,n);
    cout<<endl;
    i--;
  }
}
void BubblsortRecursively(int *arr,int n,int i){
  if(n==0||n==1) return ;
  for(int i=0;i<n;i++){
    if(arr[i-1]>arr[i]){
      swap(arr[i-1],arr[i]);
    }
  }
  PrintArray(arr,n);
    cout<<endl;
  
  // i++;
  n--;
  BubblsortRecursively(arr,n,i);
  
  
}
int main() {

  string s = "a";

  // reverse(s);
  int n = s.size() - 1;
  // recursiceTwoPivot(s, 0, n);
  // cout<<checkPalindrome(s,0,n)<<endl;
  int arr[10]={12,1,10,4,4,2,3,9,7,6};
  // int a, b;
  // cin >> a >> b;
  // /cout << a << " " << b << endl;
  // int num = exponent(a, b);
  // bubbleSort(arr,sizeof(arr)/4);
  cout<<"using recusrsion"<<endl;
  BubblsortRecursively(arr,sizeof(arr)/4,0);
  cout<<"answer"<<endl;
  PrintArray(arr,n);
  cout << "answer  " << arr;
}
