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
  for (ll i = n; i <= 919; i++) {
    string s = to_string(i);
    int one = int(s.at(2) - '0');
    int ten = int(s.at(1) - '0');
    int han = int(s.at(0) - '0');
    if (han * ten == one) {
      cout << i << "\n";
      return 0;
    }
  }
}
