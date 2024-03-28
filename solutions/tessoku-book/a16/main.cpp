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
  vector<ll> a(100009);
  vector<ll> b(100009);
  vector<ll> dp(100009);
  for (ll i = 2; i <= n; i++) {
    a.at(i) = in_ll();
  }
  for (ll i = 3; i <= n; i++) {
    b.at(i) = in_ll();
  }
  dp.at(1) = 0;
  dp.at(2) = a.at(2);
  for (ll i = 3; i <= n; i++) {
    dp.at(i) = min(dp.at(i - 1) + a.at(i), dp.at(i - 2) + b.at(i));
  }
  cout << dp.at(n) << endl;
}
