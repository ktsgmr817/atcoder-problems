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
  ll m = in_ll();
  string s = in_str();
  string t = in_str();
  bool start = ((int)t.find(s) == 0);
  string t_end = t.substr(m - n);
  bool end = t_end == s;
  if (start && end)
    cout << 0 << endl;
  else if (start)
    cout << 1 << endl;
  else if (end)
    cout << 2 << endl;
  else
    cout << 3 << endl;
}
