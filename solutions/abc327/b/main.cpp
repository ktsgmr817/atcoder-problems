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
  ll b = in_ll();
  if (b == 1) {
    cout << 1 << "\n";
    return 0;
  }
  rep(i, 20) {
    ll s = 1;
    rep(h, i) { s *= i; }
    if (s == b) {
      cout << i << "\n";
      return 0;
    }
  }
  cout << -1 << "\n";
}
