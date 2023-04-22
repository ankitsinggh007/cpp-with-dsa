#include<iostream>
#include<stack>
#include<string>
using namespace std;
// Q1 Reverese a sstring using stack?

void ReverseStr(string &str){

 stack<char>S;

 for(int i=0;i<str.size();i++){
    char a=str[i];
    S.push(a);
 }
    string st="";
 for(int i=0;i<str.size();i++){
  cout<<S.pop()<<endl;
 }

}

int main(){

string str="ankit";

ReverseStr(str);
cout<<"ans"<<" : "<<str<<endl;

}