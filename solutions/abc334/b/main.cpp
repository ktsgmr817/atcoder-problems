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

// ll同士の切り上げ
ll ceil_ll(ll x, ll m) {
  return (x + m - 1) / (m);
}

// ll同士の切り捨て
ll floor_ll(ll x, ll m) {
  ll r = (x % m + m) %
         m; // x を m で割った余りを求める。負の数の場合も考慮するために m
            // を加え、再度 m で割る
  return (x - r) / m; // x から余り r を引き、m で割った商を返す
}

int main() {
  ll a = in_ll();
  ll m = in_ll();
  ll l = in_ll();
  ll r = in_ll();
  l -= a;
  r -= a;
  // L側の内側のk

  // cout << l << " " << r << endl;
  ll min_k;
  if (l >= 0) {
    min_k = ceil_ll(l, m);
  } else {
    min_k = floor(l / m);
  }
  // cout << min_k << endl;
  // L側の最小値
  // ll min_y = a + min_k * m;

  // R側の内側のk
  ll max_k = floor_ll(r, m);
  // cout << max_k << endl;
  // L側の最小値
  // ll max_y = a + max_k * m;

  // if (min_y > max_y) {
  //   cout << 0 << endl;
  //   return 0;
  // }

  cout << max_k - min_k + 1 << endl;

  // cout << ((max_y - min_y) / m) + 1 << endl;
}
