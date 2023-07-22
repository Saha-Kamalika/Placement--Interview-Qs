// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int smallest(int n) {
  int min = n % 10;
  while (n > 0) {
    int d = n % 10;
    if (d < min) {
      min = d;
    }
    n /= 10;
  }
  return min;
}
int largest(int n) {
  int max = n % 10;
  while (n > 0) {
    int d = n % 10;
    if (d > max) {
      max = d;
    }
    n /= 10;
  }
  return max;
}
int main() {
  int input1, input2, input3;
  cin >> input1 >> input2 >> input3;
  int l1 = smallest(input1);
  int l2 = smallest(input2);
  int l3 = smallest(input3);
  int key1 = l1 + l2 + l3;
  int m1 = largest(input1);
  int m2 = largest(input2);
  int m3 = largest(input3);
  int key2 = m1 + m2 + m3;
  cout << (key1 - key2) << endl;
}