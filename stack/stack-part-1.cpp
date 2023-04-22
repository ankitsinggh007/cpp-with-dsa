#include<iostream>
#include<stack>
#include<string>
using namespace std;
// Q1 Reverese a sstring using stack?


#include <bits/stdc++.h>
void solve(stack<int>&inputStack,int mid,int count){
   if(count==mid){
      inputStack.pop();
      return;
   }
   int num=inputStack.top();
   inputStack.pop();
   solve(inputStack,mid,++count);
      inputStack.push(num);

}
 
void deleteMiddle(stack<int>&inputStack, int N){
      int mid=N/2;
      int count=0;
   solve(inputStack,mid,count);
}
int main(){


}