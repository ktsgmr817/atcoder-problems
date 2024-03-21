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
  ll q = in_ll();
  string s = in_str();
  char tmp = s.at(0);
  vector<ll> counts(n, 0);
  for (ll i = 1; i < n; i++) {
    if (tmp == s.at(i))
      counts.at(i) = counts.at(i - 1) + 1;
    else
      counts.at(i) = counts.at(i - 1);

    tmp = s.at(i);
  }
  rep(i, q) {
    ll l = in_ll() - 1;
    ll r = in_ll() - 1;
    if (l == 0)
      cout << counts.at(r) << endl;
    else
      cout << counts.at(r) - counts.at(l) << endl;
  }
}
