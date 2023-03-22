// #include <iostream>
// #include <vector>
// using namespace std;
// void getValue(int arr[][4],int row,int col){

//   for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//       cin>>arr[i][j];
//     }
//   }
// }
// void printArray(int arr[][4],int row,int col){
//   for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//       cout<<arr[i][j];
//     }
//     cout<<endl;
//   }
// }
// void largestRowSum(int arr[][4],int row,int col){
//   pair<int,int>temp;
//   for(int i=0;i<row;i++){
//     int sum=0;
//     for(int j=0;j<col;j++){
//       sum+=arr[i][j];
//     }
//     if(temp.first<sum){
//       temp.first=sum;
//       temp.second=i;
//     }
//   }
//   cout<<"this row have maximum sum"<<temp.second;
// }
// vector<int> findPair(int x, int y) {
//   // Write your code here.
//   int X = (x + y) / 2;
//   int Y = (x - y) / 2;
//   vector<int> v;
//   cout<<"size"<<sizeof(X)<<"size"<<endl;
//   if (sizeof(X) == 4 && sizeof(Y) == 4) {
//     v.push_back(X);
//     v.push_back(Y);
//   } else {
//     v.push_back(-1);
//     v.push_back(-1);
//   }
//   return v;
// }
// int main() {

//   cout << "provide me a size of row the col will alway's be same" << endl;
//   int x, y;
//   cin >> x>>y;
//   cout<<"input"<<x<<" "<<y<<"input"<<endl;
//   vector<int> v=findPair(x, y);
//   cout<<v[0]<<" "<<v[1];
// }