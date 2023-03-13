# include <iostream>
using namespace std;

// int main( ){

//   int a=5;
//   int b=2;
//   int c=4;
//   cout<<(a&b)<<endl<<~c<<endl;
//   cout<<"end";
// }

// print fibonnaci no. upto n;
int main(){
  int fistValue=0;
  int secondValue=1;
  cout<<"provide no. "<<endl;
  int n;
  cin>>n;
  int sum=0;
  for( int i=0,j=1,k=0;k<=n;k++){

      
      cout<<i<<" ";
      sum=i+j;
      i=j;
      j=sum;

    
  }
}