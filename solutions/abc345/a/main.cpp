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
  bool answer = true;
  rep(i, s.size()) {
    char c = s.at(i);
    if (i == 0 && c != '<') {
      answer = false;
      break;
    } else if (i == s.size() - 1 && c != '>') {
      answer = false;
      break;
    } else if (i != 0 && i != s.size() - 1 && c != '=') {
      answer = false;
      break;
    }
  }
  cout << (answer ? "Yes\n" : "No\n");
}
