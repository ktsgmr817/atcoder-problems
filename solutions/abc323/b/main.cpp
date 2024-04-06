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
  map<ll, vector<ll>, greater<ll>> points;
  rep(_, n) {
    string s = in_str();
    ll count = 0;
    rep(i, s.size()) {
      if (s.at(i) == 'o')
        count++;
    }
    if (points.count(count)) {
      points.at(count).push_back(_ + 1);
    } else {
      points[count] = {_ + 1};
    }
  }
  for (auto it = points.begin(); it != points.end(); ++it) {
    sort(all(it->second));
    for (ll i = 0; i < it->second.size(); i++) {
      cout << it->second.at(i) << (next(it) != points.end() ? " " : "\n");
    }
  }
}
