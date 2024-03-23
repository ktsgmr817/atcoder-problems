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
  string s = in_str();
  for (ll i = 0; i < n - 1; i++) {
    if ((s.at(i) == 'a' && s.at(i + 1) == 'b') ||
        (s.at(i) == 'b' && s.at(i + 1) == 'a')) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
}
