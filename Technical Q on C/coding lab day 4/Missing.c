#include<stdio.h>
void missing(int a[],int n){
  int asum=((n+1)*(n+2))/2;
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=a[i];
  printf("Missing term: %d",(asum-sum));
}
void main(){
  int a[]={1,2,3,5};
  int n=sizeof(a)/sizeof(a[0]);
  missing(a,n);
}