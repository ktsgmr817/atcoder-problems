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
  ll count = 0;
  for (ll i = 1; i <= n; i++) {
    ll d = in_ll();
    ll num = i % 10;
    // iがゾロ目ではない
    if (i >= 10 && i / 10 != num)
      continue;

    for (ll j = 1; j <= d; j++) {
      if (j < 10 && j == num)
        count++;
      else if (j >= 10 && j % 10 == num && j / 10 == num)
        count++;
    }
  }

  cout << count << "\n";
}
