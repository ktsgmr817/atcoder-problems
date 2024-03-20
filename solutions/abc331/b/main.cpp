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
  ll s = in_ll();
  ll m = in_ll();
  ll l = in_ll();
  ll ans = 1000000;
  for (ll i = 0; i <= 100; i++) {
    for (ll j = 0; j <= 100; j++) {
      for (ll k = 0; k <= 100; k++) {
        if (i * 6 + j * 8 + k * 12 >= n) {
          ans = min(ans, i * s + j * m + k * l);
        }
      }
    }
  }
  cout << ans << endl;
}
