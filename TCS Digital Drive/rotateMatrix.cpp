/*Rotate a square matrix in place by 90 degree clockwise
//matrix-->transpose-->reverse the rows
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
   int n,s,e;
   cout<<"Enter order: ";
   cin>>n;
   int a[n][n];
   cout<<"Enter elements: "<<endl;
   for(int i=0;i<n;i++){
      cout<<endl;
      for(int j=0;j<n;j++)
         cin>>a[i][j];
   }
   //transpose
   for(int i=0;i<n;i++){
     for(int j=i;j<n;j++){
       swap(a[i][j],a[j][i]);
     }
   }
   //reverse rows;
   for(int i=0;i<n;i++){
     s=0,e=n-1;
     while(s<e){
       swap(a[i][s],a[i][e]);
       s++;
       e--;
     }
   }
   cout<<"Rotated Matrix: "<<endl;
   for(int i=0;i<n;i++){
       cout<<endl;
       for(int j=0;j<n;j++)
         cout<<a[i][j]<<" ";
   }
   cout<<endl;
   return 0;
   }
