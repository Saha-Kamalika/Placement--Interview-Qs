/*
- number of employees who solved only the first, only second, only third are equal
- p1-> solved first and second
- p2-> solved second and third
- p3-> solved third and first
- q-> solved all 3
- e->total employees
- r->didn't participate

find--
- no of emp who solved the first problem
- solved exactly one of the 3 problems
*/

#include<iostream>
using namespace std;

int calculate(int p1,int p2,int p3,int q,int e,int r){
  int exact = e-r+2*q-p1-p2-p3;
  int X=exact/3;
  int first=X+p1-q+q+p2-q;
  cout<<first<<endl<<exact<<endl;
  return 0;
}
int main(){
  int p1,p2,p3,q,e,r;
  cin>>p1>>p2>>p3>>q>>e>>r;
  calculate(p1,p2,p3,q,e,r);
  return 0;
}
