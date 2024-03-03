#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int sum = a + b;
  if (sum == 9) {
    cout << 0 << endl;
  } else {
    cout << sum + 1 << endl;
  }
}
