/*Problem Description -: Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.

Note : Keep the first of the array unaltered. */


#include <bits/stdc++.h>
using namespace std;
vector<int> rotate(int* arr, int n,int k){
    if(k>n) k%=n;
    vector<int> ans(n);
    for(int i=0;i<k;i++) ans[i]=arr[n-k+i];
    int index=0;
    for(int i=k;i<n;i++) ans[i]=arr[index++];
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    vector<int> ans= rotate(arr,n,k);
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    return 0;
}
