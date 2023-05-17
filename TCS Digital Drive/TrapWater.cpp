#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int left[n]={0};
    int right[n]={0};
    int maxl=0,maxr=0;
  
    for(int i=0;i<n;i++){
        maxl=max(a[i],maxl);
        left[i]=maxl;    //max height at each index from left
    }

    for(int i=n-1;i>=0;i--){
        maxr=max(a[i],maxr);
        right[i]=maxr;    //max height at each index from right
    }
    int count=0;
    for(int i=0;i<n;i++){
        count+=min(left[i],right[i])-a[i];
    }
    cout<<"amount: "<<count<<endl;
  return 0;
}