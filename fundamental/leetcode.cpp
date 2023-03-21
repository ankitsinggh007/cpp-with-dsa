// Reverse int
// class Solution {
// public:
//     int reverse(int x) {

//         int ans=0;
//         int i=0;
//         while(x!=0){

//             int LastDigit=x%10;
//             x=x/10;
//             if(ans>INT_MAX/10 || ans<INT_MIN/10 ){
//                 return 0;

//             }
//             else{
//             ans=ans*10+LastDigit;
//             i++;

//             }

//         }
//         return ans;
//     }
// };
// Given an integer n, return true if it is a power of two. Otherwise, return
// false.

// An integer n is a power of two, if there exists an integer x such that n ==
// 2x. class Solution { public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;

// while(n!=0){

//     if(!(n&1){
//         return false;
//     }
//     n=n>>1;

// }
// return true;

//     }
// };
// The complement of an integer is the integer you get when you flip all the 0's
// to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010"
// which is the integer 2. Given an integer n, return its complement. class
// Solution { public:
//     int bitwiseComplement(int n) {

// if(n==0) return 1;

//     int mask=0,x=n,count=0;
//             while(x!=0){

//                 count++;

//                 x=x>>1;

//             }
//             // return count;
//             int j=0;
//             while(count>=1){
//                 mask=mask<<1;

//                 mask=mask|1;
//                 count--;
//                 j++;
//             }
//             return ~n&mask ;

//         }
// };
// create calc having +/-/%///* operation can perform;

// int main(){

//   int arg1,arg2;
//   char op;
//   cout<<"provide arg1,arg2,operation to be perfrom respectively "<<endl;
// cin>>arg1;
// cin>>arg2;
// cin>>op;
//   switch(op){
//     case '*' : cout << arg1 * arg2;
//                 break;
//     case '-' : cout << arg1 - arg2;
//                 break;

//     case '+' : cout << arg1 + arg2;
//                 break;

//     case '/' : cout << arg1 / arg2;
//                 break;

//     case '%' : cout << arg1 % arg2;
//                 break;
//   default:cout<<"provide correct operation";
//     }
// }
// reverse an array based on given array;
// void getValue(int array[], int size) {

//   for (int i = 0; i < size; i++) {

//     cin >> array[i];
//   }
//   return;
// }
// void reverse(int aray[],int size){
//   for(int i=0,j=size-1;i<size/2 ||j>size/2;i++,j--){
//     int temp=aray[i];
//   // cout<<temp;

//     aray[i]=aray[j];
//     aray[j]=temp;

//   }
//   return;
// }
// int main() {
//   int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);
// for (int i = 0; i < size; i++) {
//     cout << givenArray[i] << " ";
//   }
//   reverse(givenArray,size);
//   for (int i = 0; i < size; i++) {
//     cout << givenArray[i] << " ";
//   }
// }
// void getValue(int array[], int size) {

//   for (int i = 0; i < size; i++) {

//     cin >> array[i];
//   }
//   return;
// }
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << array[i] << " ";
//   }
// }

// void swapAlternate(int array[], int size) {

//   for (int i = 0; i < size - 1; i += 2) {
//     int temp = array[i];
//     array[i] = array[i + 1];
//     array[i + 1] = temp;
//   }
// }
// swap alternate;

// int main() {
//   int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);

//   printArray(givenArray, size);
//   cout << endl;
//   swapAlternate(givenArray, size);
//   printArray(givenArray, size);
// }
// int findDuplicate(vector<int> &arr)
// {
//   int N=arr.size()-1;
//   int ans=0;
//   for(int i=0,j=0;i<=N;i++,j++){
//     ans=ans^arr[i]^j;
//   }
//   return ans;

// }
// #include <bits/stdc++.h>
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int>
// &arr2,
//                                   int m) {

//   vector<int> answer;

//   int i = 0, j = 0;
//   while (i < n && j < m) {
//     if (arr1[i] < arr2[j]) {
//       i++;
//     } else if (arr1[i] > arr2[j]) {
//       j++;
//     } else if (arr1[i] == arr2[j]) {
//       answer.push_back(arr1[i]);
//       i++;
//       j++;
//     }
//   }
//   return answer;
// }

// Implement binary search and find is k present or not
// int findNumber(int arr[],int size,int k){

//   int start=0;
//   int end=size-1;
//   while(start<=end){
//     int mid=(start+end)/2 ;
//     if(arr[mid]==k){
//       return mid;
//     }
//     else if(arr[mid]>k){
//       end=mid-1;
//     }
//     else if(arr[mid]<k){
//       start=mid+1;
//     }
//   }
//   return -1;

// }
// int main(){
//  int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);
// cout<<"Wich no. to be found"<<endl;
//   int k ;
//   cin>>k;
//   printArray(givenArray,size);
//   cout<<k;
//   int j=findNumber(givenArray,size,k);

// cout<<j;

// }
// int firstOccurense(int arr[], int size, int k) {

//   int first = -1;
//   int start = 0, end = size - 1;
//   while (start <= end) {

//     int mid = (start + end) / 2;
//     if (arr[mid] == k) {
//       first = mid;
//       start = 0;
//       end = mid - 1;
//     } else if (arr[mid] > k) {
//       end = mid - 1;
//     } else if (arr[mid] < k) {
//       start = mid + 1;
//     }
//   }
//   return first;
// }
// int secondOccurense(int arr[], int size, int k) {

//   int first = -1;
//   int start = 0, end = size - 1;
//   while (start <= end) {

//     int mid = (start + end) / 2;
//     if (arr[mid] == k) {
//       first = mid;
//       start = 0;
//       start = mid + 1;
//     } else if (arr[mid] > k) {
//       end = mid - 1;
//     } else if (arr[mid] < k) {
//       start = mid + 1;
//     }
//   }
//   return first;
// }
// int main() {

//   int size;
//   cout << "How many elemnt will you give" << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide" << endl;
//   getValue(givenArray, size);
//   cout << "Wich no. to be found" << endl;
//   int k;
//   cin >> k;
//   printArray(givenArray, size);
// }
// class Solution {
// public:
//   int mySqrt(int x) {

//     int s = 0, e = x;
//     int mid = -1;
//     while (s <= e) {
//       int mid = s + (e - s) / 2;

//       if (pow(mid, 2) == x) {
//         return mid;
//       } else if (pow(mid, 2) > x) {
//         e = mid - 1;
//       } else if (pow(mid, 2) < x) {
//         s = mid + 1;
//       }
//     }
//     return e;
//   }
// };

// pair<bool,int> allocateBook(int arr[],int size,int mid,int student){
//           // there could be three cases can be generated
//           // 1.student left-->mid should be decrease;
//           // 2.books left-->mid should be increase;
//           // 3 books allocated succesfully->save mid ;

// }
// int bookAllocation(int arr[],int size,int student){
// int sum=sumOfArray(arr, size);
//   int s=0,e=sum;
//   while(s<=e){

//     int mid=s+(e-s)/2 ;

//     pair<bool,int> allocated=allocateBook(arr,size,mid,student);

//   }

// }

// int main(){

//   int size;
//   cout << "How many book are there " << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide no. of pages respectively" << endl;
//   getValue(givenArray, size);
//   cout << "no. of student to be allocated" << endl;
//   int k;
//   cin >> k;

//    cout<<bookAllocation(givenArray,size,k);
// }
// // book allocation
// #include <bits/stdc++.h>

// bool isPossibleSolution(vector<int> &pages, int n, int b,int mid){

// 			int sum=0;
// 			int student=1;
// 	for(int i=0;i<n;i++){

// 		if(sum+pages[i]<=mid){
// 			sum=sum+pages[i];
// 		}

// 		else {
// 			student++;
// 			if(student>b|| pages[i]>mid){
// 				return false;
// 			}
// 			sum=pages[i];
// 		}

// 	}
// 		return true;

// }

// int allocateBooks(vector<int> &pages, int n, int b)
// {
// 	int s=0;
// 	int sum=0;
// 	for(int i=0;i<n;i++){
// 		sum=sum+pages[i];
// 	}
// 	int e=sum;
// 	int ans=-1;
// 		if(n<b){
// 			return -1;
// 		}
// 	while(s<=e){

// 		int mid=s+(e-s)/2 ;
// 		if(isPossibleSolution(pages,n,b,mid)){
// 			ans=mid;
// 			e=mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 		}

// 	}
// 	return ans;

// }
// void getValue(int array[], int size) {

//   for (int i = 0; i < size; i++) {

//     cin >> array[i];
//   }
//   return;
// }
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << array[i] << " ";
//   }
// }
// int sumOfArray(int arr[], int size) {

//   int sum = 0;

//   while (size >= 1) {
//     sum = arr[size - 1] + sum;
//     size--;
//   }
//   return sum;
// }
// void selectionSort(int arr[],int size){

//   for(int i=0;i<size;i++){
//     int minIndex=i;
//     for(int j=i+1;j<size;j++){

//       if(arr[minIndex]>arr[j]){
//         minIndex=j;
//       }

//     }
//     swap(arr[minIndex],arr[i]);
//   }
// }
// void bubbleSort(int arr[],int size){
//   int s=size;
//   while(s>=0){
//     for(int i=0;i<size-1;i++){
//       if(arr[i]>arr[i+1]){
//         swap(arr[i],arr[i+1]);
//       }
//   }
//     s--;
//   }
// }
// void getValue(int array[], int size) {

//   for (int i = 0; i < size; i++) {

//     cin >> array[i];
//   }
//   return;
// }
// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     cout << array[i] << " ";
//   }
// }

// void pushZerosAtEnd(int arr[], int size)
// {

//   int count=0;
//   for(int i=0;i<size;i++){
//     if(arr[i]==0){
//       count++;
//     }
//     else if(arr[i]!=0){
//       arr[i-count]=arr[i];
//     }
//   }
//   for(int i=size-count;i<size;i++){
//     arr[i]=0;
//   }
// }
//  void rotate(int arr[],int size, int k) {
//     for(int i=size-k-1,j=size-1;i<=j;i++,j--){

//       swap(arr[i],arr[j]);
//     }
//    for(int i=k-1;i>=0;i--){
//         int j=i;
//      int temp=arr[i];
//      for(j;j<size-1;j++){

//        arr[j]=arr[j+1];

//      }
//      arr[j]=temp;
//      size--;
//    }

//     }
// int main() {

//   int size;
//   cout << "How many book are there " << endl;
//   cin >> size;
//   int givenArray[size];
//   cout << "Provide no. of pages respectively" << endl;
//   getValue(givenArray, size);
//   int k;
//   cout<<"Provide no.";
//   cin>>k;
//   printArray(givenArray, size);
//   // pushZerosAtEnd(givenArray, size);
//   rotate(givenArray,size,k);
//   cout<<endl;
//   printArray(givenArray, size);
// }
// class Solution {
// public:
//     void rotate(vector<int>& arr, int k) {
//    vector<int> temp(arr.size());
//    for(int i=0;i<arr.size();i++){

//        int mal=(i+k)%arr.size();
//        temp[mal]=arr[i];

//    }
//    arr=temp;
//     }
// };
// #include <bits/stdc++.h>
// void reverseArray(vector<int> &arr , int m)
// {

// 	int arra[arr.size()-m-1];
// 	int j=arr.size()-m-1-1;
// 	for(int i=m+1;i<arr.size();i++){
// 		arra[j--]=arr[i];
// 	}
// 	int k=0;
// 	for(int i=m+1;i<arr.size();i++){
// 		arr[i]=arra[k++];
// 	}

// }
// void Reverse(char ch[],int n){
//   int s=0;
//   int e=n-1;
//   while(s<=e){
//     swap(ch[s++],ch[e--]);
//   }
// }
// int Length(char ch[]){
//   int count=0;
//   for(int i=0;ch[i]!='\0';i++){
//     count++;
//   }
//   return count;
// }
// int main(){
//   char name[10];
//   cout<<"Provide you're name";
//   cin>>name;
//   int n=Length(name);
//   cout<<"hi,how are you "<<name<<endl;
//   Reverse(name,n);
//   cout<<" reverse of you're input is "<<name;

// }
// #include <iostream>

// using namespace std;
// bool isPalindrome(string &s) {
//   int start=0;
//   int e=s.length()-1;
//   while(start<=e){
//       if(s[start++]!=s[e--]){
//         return false;
//       }
//   }
//   return true;
// }
// void printString(string &s) { cout << s; }
// int main() {
//   cout << "Provide string" << endl;
//   string s;
//   cin >> s;
//   printString(s);
//   cout<<endl;
//   if (isPalindrome(s)) {
//     cout << "yes it is palindrome";
//   } else {
//     cout << "no it is not palindrome";
//   }
// }
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {

//        while(s.length()>=0 && s.find(part)<s.length()){
//            s.erase(s.find(part),part.length());
//        }
//     return s;

//     }
// };
// class Solution {
// private:
//   bool compare(int arr[], int arr1[]) {
//     for (int i = 0; i < 26; i++) {
//       if (arr[i] != arr1[i]) {
//         return false;
//       }
//     }
//     return true;
//   }

// public:
//     bool checkInclusion(string s1, string s2) {

//         int count[26]={0};

//         for(int i=0;i<s1.length();i++){
//             int a=s1[i]-'a';
//             count[a]++;
//         }
//         int windowlength=s1.length()-1;

//         for(int i=0;i+windowlength<s2.length();i++){
//             int j=i+windowlength;
//                 int count1[26]={0};
//                 int starting=i;
//             while(starting<=j){
//                 int a=s2[starting]-'a';
//                 count1[a]++;
//                 starting++;
//             }
//             if(compare(count,count1)){
//                     return true;
//             }
//         }
//         return false;
//     }
// };

