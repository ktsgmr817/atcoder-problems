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
  ll q = in_ll();
  ll sum = 0;
  vector<ll> a(n);
  rep(i, n) {
    a.at(i) = sum + in_ll();
    sum = a.at(i);
  }
  rep(i, q) {
    ll l = in_ll();
    ll r = in_ll();
    if (l == 1) cout << a.at(r - 1) << endl;
    else cout << a.at(r - 1) - a.at(l - 2) << endl;
  }
}
