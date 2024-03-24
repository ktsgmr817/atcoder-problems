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
  vector<ll> b(n - 1);
  rep(i, n) {
    ll a_i = in_ll();
    a.at(i) = a_i;
  }
  rep(i, n) {
    if (i != n - 1) {
      b.at(i) = a.at(i) * a.at(i + 1);
    }
  }
  rep(i, n - 1) { cout << b.at(i) << (i == n - 2 ? "\n" : " "); }
}
