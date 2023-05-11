/*
0, 0, 2, 1, 4, 2, 6, 3, 8, 4.....

Write a program to find the Nth term in the series

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int N,i,a=0,b=0;
  cin>>N;
  //O(N)
  /*for(i=1;i<=N;i++){
    if(i%2!=0){
      if(i>1) a+=2;
    }
    else b=a/2;
    }
  if(N%2!=0) cout<<"The "<<N<<"th term of this series is "<<a<<endl;
  else cout<<"The "<<N<<"th term of this series is "<<b<<endl;*/

  //O(1)
  if ((N-1)%2==0) cout<<N-1<<endl;
  else cout<<(N-1)/2<<endl;
  
  return 0;

}