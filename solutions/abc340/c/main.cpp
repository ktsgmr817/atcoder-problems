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

map<ll, ll> m;

ll f(ll n) {
  if (n == 1)
    return 0;
  if (m.count(n))
    return m[n];

  return m[n] = f(n / 2) + f((n + 1) / 2) + n;
}

int main() {
  ll N = in_ll();

  cout << f(N) << endl;
}
