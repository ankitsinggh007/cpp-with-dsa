#include<iostream>
using namespace std;
// recursion

// find factorialof n?
int factorial(int n){
  if(n==0||n==1){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}
int main(){
  int n;
  cout<<"Provide n"<<endl;
  cin>>n;
cout<<factorial(n)<<endl;
  
}