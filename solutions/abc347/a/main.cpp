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
  vector<ll> as;
  rep(i, n) {
    ll a = in_ll();
    if (a % k == 0) {
      as.push_back(a / k);
    }
  }
  for (ll i = 0; i < as.size(); i++) {
    cout << as.at(i) << (i != as.size() - 1 ? " " : "\n");
  }
}
