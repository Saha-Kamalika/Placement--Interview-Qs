#include<stdio.h>
int gcd(int n1,int n2){
  if(n2!=0) return gcd(n2,n1%n2);
  else return n1;
}
int main(){
  int n1,n2;
  printf("Enter the numbers: ");
  scanf("%d%d",&n1,&n2);
  int ans=gcd(n1,n2);
  printf("GCD of %d and %d is: %d",n1,n2,ans);
}