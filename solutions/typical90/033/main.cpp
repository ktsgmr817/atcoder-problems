#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll h, w;
  cin >> h >> w;
  if (h == 1 || w == 1) {
    cout << h * w << endl;
    return 0;
  }
  cout << ceill(w / 2.0) * ceill(h / 2.0) << endl;
}
