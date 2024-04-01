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
  ll a = in_ll();
  ll b = in_ll();
  vector<ll> after;
  rep(i, n) {
    ll d = in_ll();
    after.push_back(d % (a + b));
  }
  sort(all(after));
  rep(i, n) after.push_back(after.at(i) + a + b);

  rep(i, after.size() - 1) {
    if (after.at(i + 1) - after.at(i) > b) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
}
