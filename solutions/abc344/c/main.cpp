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
  vector<ll> a(n);
  rep(i, n) { a.at(i) = in_ll(); }
  ll m = in_ll();
  vector<ll> b(m);
  rep(i, m) { b.at(i) = in_ll(); }
  ll l = in_ll();
  vector<ll> c(l);
  rep(i, l) { c.at(i) = in_ll(); }

  unordered_set<ll> a_b_sum;
  rep(a_i, n) {
    rep(b_i, m) { a_b_sum.insert(a.at(a_i) + b.at(b_i)); }
  }

  ll q = in_ll();
  vector<ll> x(q);
  rep(i, q) { x.at(i) = in_ll(); }

  for (ll x_i = 0; x_i < q; x_i++) {
    bool found = false;
    rep(i, c.size()) {
      ll remain = x.at(x_i) - c.at(i);
      if (a_b_sum.find(remain) != a_b_sum.end()) {
        found = true;
        break;
      }
    }
    // for (ll a_i = 0; a_i < n; a_i++) {
    //   for (ll b_i = 0; b_i < m; b_i++) {
    //     ll remain = x.at(x_i) - a.at(a_i) - b.at(b_i);
    //     if (count(c.begin(), c.end(), remain)) {
    //       found = true;
    //       break;
    //     }
    //   }
    //   if (found) {
    //     break;
    //   }
    // }
    cout << (found ? "Yes" : "No") << endl;
  }
}
