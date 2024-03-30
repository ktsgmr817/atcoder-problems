#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
#define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
#define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)
inline ll in_ll() {
  ll x;
  cin >> x;
  return x;
}
inline string in_str() {
  string x;
  cin >> x;
  return x;
}

int main() {
  ll N = in_ll();
  map<ll, ll> count;
  for (ll i = -24; i <= 24; i++) {
    count[i] = 0;
  }
  rep(i, N) {
    ll w = in_ll();
    ll x = in_ll();
    ll diff = (x > 12 ? x - 24 : x);
    for (ll j = 0; j < 9; j++) {
      cout << diff + 9 + j << endl;
      count.at(diff + 9 + j) += w;
    }
  }
  for (auto [key, v] : count) {
    cout << key << " " << v << "\n";
  }
}
