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
  rep(i, N) {
    ll w = in_ll();
    ll x = in_ll();
    ll diff;
    if (0 <= x && x <= 12) {
      diff = x;
    } else {
      diff = x - 24;
    }
    for (ll start = 9 - x; start <= 17 - x; start++) {
      ll time = start;
      if (start < 0) {
        time = 24 + start;
      } else if (start >= 24) {
        time = start - 24;
      }
      if (count.count(time)) {
        count.at(time) += w;
      } else {
        count[time] = w;
      }
    }
  }
  ll maximum = -1000;
  for (auto [key, v] : count) {
    // cout << key << " " << v << "\n";
    maximum = max(maximum, v);
  }
  cout << maximum << "\n";
}
