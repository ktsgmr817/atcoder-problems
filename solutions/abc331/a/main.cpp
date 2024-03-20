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
  ll M = in_ll();
  ll D = in_ll();
  ll y = in_ll();
  ll m = in_ll();
  ll d = in_ll();
  if (d == D) {
    d = 1;
    if (m == M) {
      m = 1;
      y++;
    } else {
      m++;
    }
  } else {
    d++;
  }
  cout << y << " " << m << " " << d << "\n";
}
