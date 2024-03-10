#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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
  ll k = in_ll();
  vector<ll> a(n);
  vector<ll> b(n);
  vector<ll> c(n);
  vector<ll> d(n);
  rep(i, n) { a.at(i) = in_ll(); }
  rep(i, n) { b.at(i) = in_ll(); }
  rep(i, n) { c.at(i) = in_ll(); }
  rep(i, n) { d.at(i) = in_ll(); }

  unordered_set<ll> ab_sum;
  unordered_set<ll> cd_sum;

  rep(i, n) {
    rep(j, n) {
      ab_sum.insert(a.at(i) + b.at(j));
      cd_sum.insert(c.at(i) + d.at(j));
    }
  }
  for (auto ab_value: ab_sum) {
    ll remain = k - ab_value;
    if (cd_sum.count(remain)) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
}
