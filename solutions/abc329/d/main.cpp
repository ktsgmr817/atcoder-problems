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
  vector<ll> points(n, 0);
  ll max_man = 0;
  rep(i, m) {
    ll a = in_ll() - 1;
    points.at(a)++;
    if (points.at(max_man) == points.at(a)) {
      max_man = min(max_man, a);
    } else if (points.at(max_man) < points.at(a)) {
      max_man = a;
    }
    cout << max_man + 1 << "\n";
  }
}
