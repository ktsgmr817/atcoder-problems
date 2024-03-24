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
  ll k = in_ll();
  ll k_sum = k * (k + 1) / 2;
  unordered_set<ll> a_set;
  rep(i, n) {
    ll a = in_ll();
    a_set.insert(a);
  }
  for (auto a : a_set) {
    if (a <= k) {
      k_sum -= a;
    }
  }
  cout << k_sum << endl;
}
