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
  ll k = in_ll();
  vector<ll> a(n);
  vector<ll> cum(n);
  ll tmp = 0;
  rep(i, n) {
    ll a_i = in_ll();
    a.at(i) = a_i;
    cum.at(i) = tmp + a_i;
    tmp += a_i;
  }

  ll r = 1;
  ll answer = 0;
  rep(i, n) {
    ll sum;
    if (i == 0)
      sum = cum.at(r);
    else
      sum = cum.at(r) - cum.at(i);
    if (r == n - 1) {
      answer += r - i + 1;
      continue;
    }
    while (cum.at(r) - cum.at(i) <= k) {
      if (i == 0)
        sum = cum.at(r);
      else
        sum = cum.at(r) - cum.at(i);
      if (r != n - 1) {
        r++;
      }
      answer++;
    }
    cout << i << " " << r << endl;
    cout << answer << endl;
  }
  cout << answer << endl;
}
