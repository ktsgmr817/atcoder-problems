#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll a;
  ll min = 0;
  ll now = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    now += a;
    if (now < 0 && now < min) {
      min = now;
    }
  }
  cout << -min + now << endl;
}
