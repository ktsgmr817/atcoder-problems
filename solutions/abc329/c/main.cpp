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
  map<char, ll> string_map;
  string tmp = "";
  rep(i, s.size()) {
    if (tmp == "" || s.at(i) == tmp.at(tmp.size() - 1)) {
      tmp += string(1, s.at(i));
      if (string_map.count(s.at(i))) {
        string_map.at(s.at(i)) = max(string_map.at(s.at(i)), (ll)tmp.size());
      } else {
        string_map[s.at(i)] = 1;
      }
    } else {
      tmp = string(1, s.at(i));
      if (string_map.count(s.at(i))) {
        string_map.at(s.at(i)) = max(string_map.at(s.at(i)), (ll)tmp.size());
      } else {
        string_map[s.at(i)] = 1;
      }
    }
  }
  ll ans = 0;
  for (auto [c, i] : string_map) {
    ans += i;
  }
  cout << ans << "\n";
}
