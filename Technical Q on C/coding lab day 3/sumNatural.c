#include<stdio.h>
int sum(int n){
  if(n==1) return 1;
  else return n+sum(n-1);
}
void main(){
  int n;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  printf("%d",sum(n));
}