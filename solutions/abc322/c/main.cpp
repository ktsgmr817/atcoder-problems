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
  ll m = in_ll();
  vector<ll> a(m);
  ll now = 0;
  rep(i, m) {
    a.at(i) = in_ll();
    for (ll j = now; j < a.at(i); j++) {
      cout << a.at(i) - j - 1 << endl;
      now++;
    }
  }
}
