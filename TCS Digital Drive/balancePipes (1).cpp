/*
check whether the incoming and outgoing pipes are balanced or not
*/

#include<iostream>
using namespace std;
int main(){
  int n,m,r; //incoming,outgoing,rust factor
  cin>>n>>m>>r;
  int in[n],out[m],sumi=0,sumo=0,i;
  for(i=0;i<n;i++){
    cin>>in[i];
    sumi+=in[i]-r; //summing the actual capacities of all incoming pipes
  }
  for(i=0;i<m;i++){
    cin>>out[i];
    sumo+=out[i]-r;//summing the actual capacities of all outgoing pipes
  }
  if(sumi==sumo){
    cout<<"BALANCED";
    return 0;
  }
  if(sumi>sumo)
    cout<<(-1*(sumi-sumo+r));
  if(sumi<sumo)
    cout<<(sumo-sumi+r);
  return 0;

}