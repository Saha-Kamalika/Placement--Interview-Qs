#include<stdio.h>
int max(int a[],int b[],int n1,int n2){
  int max1=a[0];
  for(int i=0;i<n1;i++)
    if(a[i]>max1) max1=a[i];

  int max2=b[0];
  for(int i=0;i<n2;i++)
    if(b[i]>max2) max2=b[i];

  return (max1+max2);
}
void main(){
  int a[]={2,1,5,7,10};
  int b[]={3,6,8,1,2};
  int n1=sizeof(a)/sizeof(a[0]);
  int n2=sizeof(b)/sizeof(b[0]);
  printf("%d",max(a,b,n1,n2));
}