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
  set<string> ss;
  for (int i = 0; i < s.size(); i++) {
    for (int j = i; j < s.size(); j++) {
      // cout << i << " " << j << endl;
      // cout << s.substr(i, j - 1) << endl;
      ss.insert(s.substr(i, j - i + 1));
    }
  }
  // for (auto jl : ss) {
  //   cout << jl << endl;
  // }
  cout << ss.size() << endl;
}
