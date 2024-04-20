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
  string s = in_str();
  map<char, ll> s_map;
  for (auto c : s) {
    if (s_map.count(c)) {
      s_map.at(c) += 1;
    } else {
      s_map[c] = 1;
    }
  }
  bool answer = true;
  for (auto [c, l] : s_map) {
    ll count = 1;
    // cout << c << " " << l <<endl;
    for (auto [c_, l_] : s_map) {
      if (c == c_) continue;
      if (l == l_) {
        // cout << c_ << " 0000" << l_ << "\n";
        count++;
      }
    }
    if (count != 2) {
      answer = false;
      break;
    }
  }
  cout << (answer ? "Yes\n" : "No\n");
}
