#include<stdio.h>
int digits(int n){
  if(n/10==0) return 1;
  else return 1+digits(n/10);
}
void main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("%d",digits(n));
}