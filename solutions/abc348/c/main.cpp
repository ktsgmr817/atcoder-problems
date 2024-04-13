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
  ll n = in_ll();
  map<ll, ll> min_deli;
  rep(i, n) {
    ll a = in_ll();
    ll c = in_ll();
    if (min_deli.count(c)) {
      min_deli.at(c) = min(min_deli.at(c), a);
    } else {
      min_deli[c] = a;
    }
  }

  ll max_deli = -1;
  for (auto &[key, value] : min_deli) {
    max_deli = max(max_deli, value);
  }
  cout << max_deli << "\n";
}
