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
  vector<ll> a(n);
  rep(i, n) { a.at(i) = in_ll(); }
  ll answer = 0;
  ll ri = 0;
  for (ll i = 0; i < n - 1; i++) {
    for (ll j = ri + 1; j < n; j++) {
      if (a.at(j) - a.at(i) <= k) {
        ri = j;
      } else {
        break;
      }
    }
    answer += ri - i;
  }
  cout << answer << endl;
}
