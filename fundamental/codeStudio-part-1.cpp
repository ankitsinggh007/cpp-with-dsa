// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // bool checkPalindrome(string s)
// // // {
// // //   string strng="";
// // //     int i=0; int j=s.size()-1;
// // //     while(i<=j){
// // //         if((!isalnum(s[i]))||s[i]==' '){
// // //             i++;
// // //         }
// // //         else if((!isalnum(s[j]))||s[j]==' '){
// // //             j--;
// // //         }
// // //         else{

// // //           cout<<s[i]<<endl;
// // //         }

// // //     }

// // //   // cout<<"ans"<<endl<<strng;

// // //   return true;
// // // }
// // // int main() {
// // //   string name = "N2 i&nJA?a& jnI2n";

// // //   checkPalindrome(name);
// // // }

// // // #include <iostream>
// // // #include <vector>

// // // using namespace std;

// // // void getValue(int *arr, int n) {
// // //   for (int i = 0; i < n; i++) {
// // //     cin >> arr[i];
// // //   }
// // // }
// // // void PrintArray(int *arr, int n) {
// // //   for (int i = 0; i < n; i++) {
// // //     cout << arr[i] << " ";
// // //   }
// // // }

// // // int main() {
// // //   int N, n;
// // //   cout << "How many day's are for exam" << endl;
// // //   cin >> N;
// // //   cout << "how many  chapter are there" << endl;
// // //   cin >> n;
// // //   cout << "how many time each chapter take" << endl;

// // //   int *arr = new int[n];
// // //   getValue(arr, n);
// // //   PrintArray(arr, n);
// // //   cout<<"answer"<<ayushGivesNinjatest(N, n, arr);
// // // }

// // #include <iostream>
// // #include <math.h>
// // using namespace std;

// // void reverse(string &s) {

// //   int i = 0;
// //   int j = s.size() - 1;
// //   while (i <= j) {
// //     swap(s[i], s[j]);
// //     i++;
// //     j--;
// //   }
// // }
// // void recursiceTwoPivot(string &s, int i, int j) {
// //   if (i >= j)
// //     return;
// //   swap(s[i], s[j]);
// //   cout << s << endl;
// //   recursiceTwoPivot(s, ++i, --j);
// // }
// // bool checkPalindrome(string &s, int i, int j) {

// //   if (i > j)
// //     return true;
// //   if (s[i] != s[j])
// //     return false;
// //   i++;
// //   j--;
// //   return checkPalindrome(s, i, j);
// // }
// // int exponent(int a, int b) {
// //   if (b == 0)
// //     return 1;

// //   return exponent(a, --b) * a;
// // }

// // void bubbleSort(int *arr, int n) {
// //   int i = n;
// //   while (i >= 0) {
// //     for (int i = 1; i < n; i++) {
// //       if (arr[i - 1] > arr[i]) {
// //         swap(arr[i - 1], arr[i]);
// //       }
// //     }
// //     PrintArray(arr, n);
// //     cout << endl;
// //     i--;
// //   }
// // }
// // void BubblsortRecursively(int *arr, int n, int i) {
// //   if (n == 0 || n == 1)
// //     return;
// //   for (int i = 0; i < n; i++) {
// //     if (arr[i - 1] > arr[i]) {
// //       swap(arr[i - 1], arr[i]);
// //     }
// //   }

// //   PrintArray(arr, n);
// //   cout << endl;

// //   // i++;
// //   n--;
// //   BubblsortRecursively(arr, n, i);
// // }

// // int main() {

// //   string s = "a";

// //   // reverse(s);
// //   int n = s.size() - 1;
// //   // recursiceTwoPivot(s, 0, n);
// //   // cout<<checkPalindrome(s,0,n)<<endl;
// //   int arr[10] = {12, 1, 10, 4, 4, 2, 3, 9, 7, 6};
// //   // int a, b;
// //   // cin >> a >> b;
// //   // /cout << a << " " << b << endl;
// //   // int num = exponent(a, b);
// //   // bubbleSort(arr,sizeof(arr)/4);
// //   cout << "using recusrsion" << endl;
// //   BubblsortRecursively(arr, sizeof(arr) / 4, 0);
// //   cout << "answer" << endl;
// //   PrintArray(arr, n);
// //   cout << "answer  " << arr;
// // }

// // #include <iostream>
// // using namespace std;
// // void PrintArray(int *arr, int n) {
// //   for (int i = 0; i < n; i++) {
// //     cout << arr[i] << " ";
// //   }
// // }
// // void merge(int *arr, int s, int e) {
// //   int mid = (s + e) /2;
// //   int l1 = mid - s + 1;
// //   int l2 = e - mid;

// //   int *arr1 = new int[l1];
// //   int *arr2 = new int[l2];
// //   int j = s;
// //   for (int i = 0; i <l1; i++) {
// //     arr1[i] = arr[j++];
// //   }
// //   j = mid + 1;
// //   for (int i = 0; i <l2; i++) {
// //     arr2[i] = arr[j++];
// //   }
// //   int i1=0;
// //   int i2=0;
// // int k=s;
// //   while(i1<l1&&i2<l2){
// //     if(arr1[i1]<=arr2[i2]){
// //       arr[k++]=arr1[i1];
// //       i1++;
// //     }
// //     else{
// //       arr[k++]=arr2[i2];
// //       i2++;
// //     }
// //   }

// //   while(i1<l1){
// //     arr[k++]=arr1[i1++];
// //   }

// //   while(i2<l2){
// //     arr[k++]=arr2[i2++];
// //   }

// // }
// // void mergeSort(int *arr, int s, int e) {
// //   if (s >= e)
// //     return;

// //   int mid = (s + e)/2;

// //   mergeSort(arr, s, mid);

// //   mergeSort(arr, mid + 1, e);

// //   merge(arr, s, e);
// // }
// // int partition(int *arr,int s,int e){
// //     int pivot=arr[s];
// //   int count=0;
// //   for(int i=s+1;i<=e;i++){
// //     if(pivot>=arr[i]){
// //       count++;
// //     }
// //   }
// //   int pivotIndex=s+count;
// //   swap(arr[s],arr[pivotIndex]);

// //   int i=s,j=e;
// //   while(i<pivotIndex &&pivotIndex<j){
// //     while(arr[i]<pivot){
// //       i++;
// //     }
// //     while(arr[j]>pivot){
// //       j--;
// //     }
// //     if(i<pivotIndex &&pivotIndex<j){
// //       swap(arr[i++],arr[j--]);
// //     }
// //   }
// //   return pivotIndex;
// // }
// // void  quickSort(int *arr, int s, int e){

// //   if(s>=e) return;

// //   int p=partition(arr,s,e);

// //     quickSort(arr,s,p-1);
// //     quickSort(arr,p+1,e);
// // }

// // int main() {
// //   int arr[10] = {10, 9, 9, 7, 16, 25, 4, 11, 22, 11};
// //   // mergeSort(arr, 0, 9);
// //   quickSort(arr, 0, 9);

// //   PrintArray(arr,10);
// // }

// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main() {
// //   int mod = pow(10,9) + 7;
// //   cout << "ans " << mod;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int Solve(int *arr, int index, int min, int n) {

//   if ((min - index - 1) != 0) {
//     return (index + 1);
//   }

//   index = min;
//   min = INT_MAX;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] > index) {
//       if (min > arr[i]) {
//         min = arr[i];
//       }
//     }
//   }

//   return Solve(arr, index, min, n);
// }
// int firstMissing(int arr[], int n) {
//   int min = INT_MAX;
//   for (int i = 0; i < n; i++) {
//     if (arr[i] > 0) {
//       if (min > arr[i]) {
//         min = arr[i];
//       }
//     }
//   }

//   return Solve(arr, 0, min, n);
// }

// /////////////////////////////////////////////////////
// bool IsPossible(int *arr, int n, int m, int mid) {

//   int sum = 0;
//   for (int i = 0; i < n; i++) {
//     if (mid >=(sum + arr[i])) {
//       sum = sum + arr[i];
//     } else {
//       m--;
//       if (m > 0) {
//         sum = 0;
//         i--;
//       } else {
//         return false;
//       }
//     }
//   }
//   return true;
// }

// int allocateBooks(int *arr, int n, int m) {
//   int i=0;
//   int max = 0;
//   for (int i = 0; i < n; i++) {
//     max = max + arr[i];
//   }
//   int ans = 0;
//   int s = 0;
//   int e = max;
//   cout<<max<<"amx"<<endl;
//   while (s <= e) {

//     int mid = (s + e) >> 1;
//     cout<<mid<<" "<< i++<<endl;
//     if (IsPossible(arr, n, m, mid)) {

//       ans = mid;
//       e = mid - 1;
//     } else {
//       s = mid + 1;
//     }
//   }
//   return ans;
// }

// int main() {
//   int arr[4] = {12, 34, 67, 90};
//   int n=4;
//   int m=2;
//   cout << allocateBooks(arr, n, m);
// }
