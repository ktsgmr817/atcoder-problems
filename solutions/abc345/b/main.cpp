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

ll floor(ll x, ll m) {
  ll r = (x % m + m) % m;
  return (x - r) / m;
}

int main() {
  ll x = in_ll();
  if (x % 10 == 0) {
    cout << x / 10 << "\n";
    return 0;
  }
  if (x >= 0) {
    ll answer = floor(x, 10);
    cout << answer + 1 << "\n";
  } else {
    ll answer = floor(-x, 10);
    cout << -answer << "\n";
  }

  // ll answer;
  // if (x % 10 == 0)
  //   answer = x / 10;
  // else {
  //   if (x > 0) {
  //     answer = x / 10 + 1;
  //   } else {
  //     answer = x / 10;
  //   }
  // }
  // cout << answer << "\n";
  // if (x >= 0) {
  //   ll answer = (x + 10 - 1) / 10;
  //   cout << answer << "\n";
  // } else {
  //   ll answer = (x + 10) / 10;
  //   cout << answer - 1 << "\n";
  // }
}
