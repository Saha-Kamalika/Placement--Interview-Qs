#include<iostream>
using namespace std;
int main(){
    int m,n;
      cin>>m>>n;
      int a[m][n];
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          cin>>a[i][j];
        }
      }
      int sum[20];
      for(int i=0;i<m;i++){
        sum[i]=0;
        for(int j=0;j<n;j++){
          sum[i]+=a[i][j];
        }
      }
      for(int i=0;i<m;i++)
        cout<<"Row "<<(i+1)<<": "<<sum[i]<<endl;
      int temp,max=1;
      for(int i=0;i<m;i++){
        if(sum[0]<sum[i+1]){
          temp=sum[0];
          sum[0]=sum[i+1];
          sum[i+1]=temp;
          max=max+1;
        }
      }
      cout<<"Row "<<(max)<<" has the maximum sum "<<sum[0];
      return 0;
}