#include<stdio.h>
void main(){
  int n1,n2;
  printf("Enter 2 number: ");
  scanf("%d%d",&n1,&n2);
  int max=(n1>n2)?n1:n2;
  while(1){
    if((max%n1)==0  &&  (max%n2)==0){
      printf("LCM: %d",max);
      break;
    }
  max++;
  }
  int gcd=(n1*n2)/max;
  printf("\nGCD: %d",gcd);
}