// #include <iostream>
// using namespace std;
// 3Q print patter for n such that it goes from 1 to n in +x and +y direction
// int main() {

//   cout << "let me print a pattern for you just give me the no. " << endl;
//   int n;

//   cin >> n;

//   for (int i = 1; i <= n; i++) {

//     for (int j = 1; j <= n; j++) {
//       cout << j << " ";
//     }
//     cout << endl;
//   }
// }
// 4Q print star's in right-angle triangle formate
// int main() {

//   int n;
//   cin >> n;

//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j <= i; j++) {

//       cout << "*"
//            << " ";
//     }
//     cout << endl;
//   }
// }
// Q5 print 1 to n in row like 1st row contain 1 second roe contain 2 2 third
// row contain 3 3 3 and so on
// int main() {
//   cout << "Provide me one no."<< endl;
//   int n;
//   cin>>n;

//   if(n<=0){
//     cout<<"provide value greater than 0 "<<endl;
//     return 0;
//   }
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//       }
//       cout<<endl;
//     }

//   }
// Q6 print 1 to n in row like 1st row contain 1 second roe contain 1 2 third
// int main() {
//   int n;

//   cout << "provide no. " << endl;
//   cin >> n;
//   int k = 1;
//   int j = 1;
//   for (int i = 1; j <= n; i++) {
//     for (int row = 0; row < i && j <= n; row++, j++) {

//       cout << j << " ";
//     }
//     cout << endl;
//   }
// }
// Q6 print 1 to n in row like 1st row contain 1 second roe contain 2 3 third 3
// 4 5; int main(){
//   int n;
//   cout<<"Provide me a no."<<endl;
//   cin>>n;

//   for(int row=1;row<=n;row++){
//         int n =row;

//     for(int col=row; n>=1;n--,col++){
//       cout<<col<<" ";
//      }
//     cout<<endl;
//   }
// }
// Q7 print 1 t0 n in row like 1st row 1 and second 2 1 and so on
// int main(){
//   int n;
//   cout<<"provide positive no."<<endl;
//   cin>>n;

//   for(int row=1;row<=n;row++){

//     for(int col=row;col>=1;col--){
//       cout<<col<<" ";
//     }
//     cout<<endl;
//   }
//   cout<<"end";
// }