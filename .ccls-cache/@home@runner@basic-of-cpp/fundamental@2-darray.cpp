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
bool findElement(int arr[][4],int row,int col,int m){

    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        if(m==arr[i][j]){
          return true;
        }
      }
    }
  return false;
}
int main(){

  cout<<"provide me a size of row the col will alway's be same"<<endl;
  int row;
  cin>>row;
  int arr[row][4];
  getValue(arr,row,4);
  cout<<"wih value you want me to find"<<endl;
  
  int m;
  cin>>m;
  printArray(arr,row,4);
  if(findElement(arr,row,4,m)){
    cout<<"Yes it is present";
  }
  else cout<<"No it's not present";
}