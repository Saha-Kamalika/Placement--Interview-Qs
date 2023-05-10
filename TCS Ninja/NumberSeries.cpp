/*
1, 1, 2, 3, 4, 9, 8, 27, 16, 81.....

Write a program to find the Nth term in the series

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int N,i,a,b;
  cin>>N;
  //O(N)
  /*for(i=1;i<=N;i++){
    if(i%2!=0){
      if(i==1) a=1;
      else a*=2;
    }
    else{
      if(i==2) b=1;
      else b*=3;
      }
    }
  if(N%2!=0) cout<<"The "<<N<<"th term of this series is "<<a<<endl;
  else cout<<"The "<<N<<"th term of this series is "<<b<<endl;*/


  //O(1)
  if(N%2!=0) cout<<pow(2,(N/2))<<endl;
  else cout<<pow(3,(N/2)-1)<<endl;
  return 0;
}
