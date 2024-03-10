#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
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
  vector<ll> a(n, 0);
  vector<ll> cum_max_right(n, 0);
  vector<ll> cum_max_left(n, 0);
  rep(i, n) { a.at(i) = in_ll(); }
  // 左端から右方向へ累積max
  rep(i, n) {
    if (i == 0) {
      cum_max_right.at(i) = a.at(i);
    } else {
      cum_max_right.at(i) = max(cum_max_right.at(i - 1), a.at(i));
    }
  }
  // 右端から左方向へ累積max
  for (ll i = n - 1; i >= 0; i--) {
    if (i == n - 1) {
      cum_max_left.at(i) = a.at(i);
    } else {
      cum_max_left.at(i) = max(cum_max_left.at(i + 1), a.at(i));
    }
  }

  ll d = in_ll();
  rep(i, d) {
    ll l = in_ll() - 1;
    ll r = in_ll() - 1;
    if (r == n - 1) {
      cout << cum_max_right.at(l - 1) << endl;
    } else {
      cout << max(cum_max_right.at(l - 1), cum_max_left.at(r + 1)) << endl;
    }
  }
}
