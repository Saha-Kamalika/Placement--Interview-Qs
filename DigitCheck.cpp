#include<iostream>
using namespace std;
bool prime(int d){
  int count=0;
  if(d>1){
  for(int i=2;i<=d/2;i++){
    if(d%i==0){
      count=1;
      break;
    }
  }
  if(count==0) return true;
  else return false;
  }
  else return false;
}
int digiCheck(int n){
  int count=0;
  if(n==0) return 0;
  while(n!=0){
    int d=n%10;
    if(prime(d)) count++;
    n/=10;
  }
  return count;
}

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int c=digiCheck(n);
  cout<<c;
}