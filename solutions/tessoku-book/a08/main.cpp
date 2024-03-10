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
  ll h = in_ll();
  ll w = in_ll();
  // 2次元配列の初期化
  vector<vector<ll>> x(h, vector<ll>(w, 0));
  rep(i, h) {
    rep(j, w) {
      x.at(i).at(j) = in_ll();
    }
  }
  rep(i, h) {
    ll count = 0;
    rep(j, w) {
      count += x.at(i).at(j);
      x.at(i).at(j) = count;
    }
  }
  rep(j, w) {
    ll count = 0;
    rep(i, h) {
      count += x.at(i).at(j);
      x.at(i).at(j) = count;
    }
  }

  ll q = in_ll();
  rep(i, q) {
    ll a = in_ll() - 1;
    ll b = in_ll() - 1;
    ll c = in_ll() - 1;
    ll d = in_ll() - 1;

    ll answer = x.at(c).at(d) - (a != 0 ? x.at(a - 1).at(d) : 0) -
                (b != 0 ? x.at(c).at(b - 1) : 0) +
                (a != 0 && b != 0 ? x.at(a - 1).at(b - 1) : 0);
    cout << answer << endl;
  }
}
