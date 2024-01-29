/*Given two non-negative integers n1 and n2, where n1

For example:

Suppose n1=11 and n2=15.

There is the number 11, which has repeated digits, but 12, 13, 14 and 15 have no repeated digits. So, the output is 4.*/


#include <bits/stdc++.h>
using namespace std;
int find(int n1,int n2){
    int count=0, num;
    for(int i=n1;i<=n2;i++){
        num=i;
        vector<bool> vis(10);
        while(num){
            if(vis[num%10]==true)break;
            vis[num%10]=true;
            num/=10;
        }
        if(num==0) count++;
    }
    return count;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int count= find(n1,n2);
    cout<<count;
    return 0;
}
