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
  ll l = in_ll();
  ll r = in_ll();
  rep(i, n) {
    ll a = in_ll();
    if (a <= l) {
      cout << l;
    } else if (a >= r) {
      cout << r;
    } else {
      cout << a;
    }
    cout << (i == n - 1 ? "\n" : " ");
  }
}
