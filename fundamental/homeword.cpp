// ////////////////////////////////
// 1Q print all odd no.from 1 to n (including both)

// #include <iostream>
// using namespace std;

// int main() {
//   int a;
//   cout << "give me a number and i will print all no. from 1 to that number"
//        << endl;
//   cin >> a;
//   for (int i = 0; i <= a; i++) {
//     if (i % 2 != 0) {
//       cout << i << endl;
//     }
//   }
//   return 0;
// }
// ////////////////////////////////
// 2Q find factorial of n?
  #include <iostream>
using namespace std;

int main (){

  int n;

  cout<<"give an input so that i can give you factorial of that input "<<endl;
  cin>>n;
  int i=n;
  cout<<i;
  int ans=1;
  while(i>=1){
  ans=ans*i;
    i--;
  }
  if(n>=0){
    cout<<"answer"<<endl<<ans;
  }
  else{
    cout<<"answer"<<endl<<0;
  }
  }

