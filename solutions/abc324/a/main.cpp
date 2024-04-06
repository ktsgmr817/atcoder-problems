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
  bool answer = true;
  ll a1 = in_ll();
  rep(i, n - 1) {
    ll a = in_ll();
    if (a1 != a) {
      cout << "No\n";
      return 0;
    }
    a1 = a;
  }
  cout << "Yes\n";
  return 0;
}
