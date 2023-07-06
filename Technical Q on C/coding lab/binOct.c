#include<stdio.h>
int main(){
  long int num,sum=0,p=1,d;
  printf("Enter the binary number: ");
  scanf("%ld",&num);
  while(num!=0){
    d=num%10;
    sum=sum+d*p;
    p*=2;
    num/=10;
  }
  printf("The octal number is: %lo",sum);
  return 0;
}