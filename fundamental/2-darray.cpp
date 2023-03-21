#include<iostream>
using namespace std;
void getValue(int arr[][4],int row,int col){

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cin>>arr[i][j];
    }
  }
}
void printArray(int arr[][4],int row,int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j];
    }
    cout<<endl;
  }
}
void largestRowSum(int arr[][4],int row,int col){
  pair<int,int>temp;
  for(int i=0;i<row;i++){
    int sum=0;
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
    }
    if(temp.first<sum){
      temp.first=sum;
      temp.second=i;
    }
  }
  cout<<"this row have maximum sum"<<temp.second;
}
int main(){

  cout<<"provide me a size of row the col will alway's be same"  <<endl;
  int row;
  cin>>row;
  int arr[row][4];
  getValue(arr,row,4);
  cout<<endl;
  printArray(arr,row,4);
  largestRowSum(arr,row,4);
}