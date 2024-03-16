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
  ll k = in_ll();
  ll sum = 0;
  rep(i, n) {
    ll p = in_ll();
    ll q = in_ll();
    sum += p * q;
  }
  if (sum<s) {
    sum += k;
  }
  cout << sum << endl;
}
