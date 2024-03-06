#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  ll s, t;
  for (ll i = 0; i < n - 1; i++) {
    cin >> s >> t;
    ll i_tmp = a.at(i);
    ll plus = i_tmp / s;
    a.at(i + 1) += plus * t;
  }
  cout << a.at(n - 1) << endl;
}
