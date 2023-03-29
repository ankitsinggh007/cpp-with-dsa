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

#include <iostream>
#include <vector>

using namespace std;

void getValue(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
}
void PrintArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}




int main() {
  int N, n;
  cout << "How many day's are for exam" << endl;
  cin >> N;
  cout << "how many  chapter are there" << endl;
  cin >> n;
  cout << "how many time each chapter take" << endl;

  int *arr = new int[n];
  getValue(arr, n);
  PrintArray(arr, n);
  cout<<"answer"<<ayushGivesNinjatest(N, n, arr);
}