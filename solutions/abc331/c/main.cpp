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
  vector<ll> a(n);
  map<ll, vector<ll>> a_map;
  ll sum = 0;
  vector<ll> ans(n);
  rep(i, n) {
    ll a_i = in_ll();
    a.at(i) = a_i;
    a_map[a_i].push_back(i);
    sum += a_i;
  }
  for (auto [v, i_list] : a_map) {
    sum -= v * i_list.size();
    for (auto i : i_list) {
      ans.at(i) = sum;
    }
  }

  rep(i, n) { cout << ans.at(i) << (i == n - 1 ? "\n" : " "); }
}
