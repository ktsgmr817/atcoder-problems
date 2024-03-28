#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; (i) < ll(n); ++(i))
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
  ll s = in_ll();
  vector<ll> a(69);
  vector<vector<bool>> dp(69, vector<bool>(100009));
  for (ll i = 1; i <= n; i++) {
    a.at(i) = in_ll();
  }
  // 動的計画法(i=0)
  dp.at(0).at(0) = true;
  for (ll j = 1; j <= s; j++) {
    dp.at(0).at(j) = false;
  }
  // 動的計画法(i>=1)
  for (ll i = 1; i <= n; i++) {
    for (ll j = 0; j <= s; j++) {
      if (dp.at(i - 1).at(j)) {
        dp.at(i).at(j) = true;
        dp.at(i).at(j + a.at(i)) = true;
      } else {
        dp.at(i).at(j) = false;
      }
    }
  }
  cout << (dp.at(n).at(s) ? "Yes\n" : "No\n");
}
