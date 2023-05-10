/*
find the absolute difference between the sum of right diagonals and left diagonals of a matrix
*/
#include<iostream>
using namespace std;
int main(){
  int n,suml=0,sumr=0,i,j;
  int arr[n][n];
  cout<<"Enter order: ";
  cin>>n;
  cout<<"Enter elements: ";
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      cin>>arr[i][j];

  for(i=0,j=n-1;i<n;i++,j--){
    suml=arr[i][i];
    sumr=arr[i][j];
  }
  cout<<"Diff = "<<abs(suml-sumr)<<endl;
  return 0;
}