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
  ll N = in_ll();
  string T = in_str();
  unordered_set<string> t_set;
  // ルール1
  t_set.insert(T);
  // ルール2
  string tmp;
  rep(i, T.size()) {
    tmp = T;
    t_set.insert(tmp.erase(i, 1));
  }
  // ルール3
  rep(i, T.size()) {
    tmp = T;
    t_set.insert(tmp.erase(i, 1));
  }
}
