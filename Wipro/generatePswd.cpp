#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isStable(int n) {
  string st = to_string(n);
  bool isSt = true;
  int f[10] = {0};
  for (int i = 0; i < st.length(); i++)
    f[st[i] - '0']++;
  sort(f, f + 10);
  int k = 9;
  while (f[k - 1] != 0) {
    if (f[k] != f[k - 1]) {
      isSt = false;
    }
    k--;
  }
  if (isSt)
    return true;
  else
    return false;
}
int password(int input1, int input2, int input3, int input4, int input5) {
  int a[5] = {0}, i = 0;
  if (isStable(input1) == true) {
    a[i] = input1;
    i++;
  }
  if (isStable(input2) == true) {
    a[i] = input2;
    i++;
  }
  if (isStable(input3) == true) {
    a[i] = input3;
    i++;
  }
  if (isStable(input4) == true) {
    a[i] = input4;
    i++;
  }
  if (isStable(input5) == true) {
    a[i] = input5;
    i++;
  }
  int n = sizeof(a) / sizeof(a[0]);
  int max = a[0], min = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min && a[i] != 0)
      min = a[i];
  }
  int res = max + min;
  return res;
}
int main() {
  int input1, input2, input3, input4, input5;
  cin >> input1 >> input2 >> input3 >> input4 >> input5;
  int ans = password(input1, input2, input3, input4, input5);
  cout << ans;
  return 0;
}