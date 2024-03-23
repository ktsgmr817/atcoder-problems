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
  ll x = in_ll();
  ll y = in_ll();
  if (x > y && x - y <= 3) {
    // くだり
    cout << "Yes\n";
    return 0;
  }
  if (x < y && y - x <= 2) {
    cout << "Yes\n";
    return 0;
  }
  cout << "No\n";
}
