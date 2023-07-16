#include<stdio.h>
#define max 10
void sumDiag(int a[max][max],int n){
  int p=0,s=0;
  for(int i=0;i<n;i++){
    p+=a[i][i];
    s+=a[i][n-i-1];
  }
  printf("Principal Diagonal sum: %d\n",p);
  printf("Secondary Diagonal sum: %d",s);
}
void main(){
  int a[max][max]={{1,2,3,4},{4,3,2,1},{7,8,9,6},{6,5,4,3}};
  sumDiag(a,4);
}