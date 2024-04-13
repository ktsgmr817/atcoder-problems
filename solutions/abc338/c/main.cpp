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
  vector<ll> q(n);
  vector<ll> a(n);
  vector<ll> b(n);
  rep(i, n) { q.at(i) = in_ll(); }
  ll x_max = 1e9;
  ll y_max = 1e9;
  rep(i, n) {
    ll a_i = in_ll();
    a.at(i) = a_i;
    if (a_i != 0) {
      x_max = min(q.at(i) / a_i, x_max);
    }
  }
  rep(i, n) {
    ll b_i = in_ll();
    b.at(i) = b_i;
    if (b_i != 0) {
      y_max = min(q.at(i) / b_i, y_max);
    }
  }

  ll answer = 0;
  ll y = 0;
  for (ll x = x_max; x >= 0; x--) {

    answer = max(answer, x + y);
  }
  // cout << x_max << endl;
  // cout << y_max << endl;
}
