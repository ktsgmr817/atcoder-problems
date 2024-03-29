#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
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
  ll d = in_ll();
  ll n = in_ll();
  vector<ll> sum(d, 0);
  rep(i, n) {
    ll l = in_ll();
    ll r = in_ll();
    sum.at(l - 1) += 1;
    if (r != d) {
      sum.at(r) -= 1;
    }
  }
  ll total = 0;
  rep(i, d) {
    total += sum.at(i);
    cout << total << endl;
  }
}
