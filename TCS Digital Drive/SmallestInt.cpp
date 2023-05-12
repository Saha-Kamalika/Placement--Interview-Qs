/*
write a program to find smallest integer value b for a given value of a such that if we multiply the digits of b, we should get the exact value of a.
Result b must contain more than 1 digit
*/

#include<iostream>
#include<stack>
using namespace std;

int find(int a){
  if(a<10) return a+10;

  stack<int> s;
  for(int i=9;i>=2;i--){
    while(a%i==0){
      s.push(i);
      a/=i;
    }
  }
  if(a!=1) return -1;

  int n=0;
  while(!s.empty()){
    int x=s.top();
    s.pop();
    n=n*10+x;
  }
  return n;
}
int main(){
  int a;
  cin>>a;
  cout<<find(a)<<endl;
  return 0;
}