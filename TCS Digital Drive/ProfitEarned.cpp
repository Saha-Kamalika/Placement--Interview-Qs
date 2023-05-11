/*In network marketing a person who sells some Merchandise becomes the root not of a so called network marketing tree. when the first person induct someone into the network marketing tree the first person becomes a supervisor like wise if this new recruit in third person into the network marketing 3 the new becomes supervisor of the third person the three grows on and so forth. whenever anybody in the network marketing makes a profit they have to pass or something percentage of that property around it to the nearest integer and hence will always be an integer. 
--->calculate the profit of the person at the root of the network marketing 3 coming from a particular individual at in its level in the tree
*/
#include<iostream>
using namespace std;
int main(){
  int n,p,m;
  cin>>n; //length of the tree
  cin>>m;//profit earned by nth person
  cin>>p;//percentage of profit to be transferred to supervisor
  while(n>1){
    m=(m*p)/100;
    n--;
  }
  cout<<m<<endl;
  return 0;
}