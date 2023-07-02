/*Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.
sockMerchant has the following parameter(s):
             n: the number of socks in the pile
             ar: the colors of each sock*/

#include<iostream>
using namespace std;
int sockPairs(int a[],int n){
  int freq[101]={0};
  int ans=0;
  for(int i=0;i<n;i++)
    freq[a[i]]++;
  for(int i=0;i<100;i++)
    ans+=freq[i]/2;
  return ans;
}
int main(){
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin>>a[i];
  int res=sockPairs(a,n);
  cout<<res<<endl;

  return 0;
}