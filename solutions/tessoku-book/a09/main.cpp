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
  ll n = in_ll();
  vector<vector<ll>> x(h, vector<ll>(w, 0));
  rep(i, n) {
    ll a = in_ll() - 1;
    ll b = in_ll() - 1;
    ll c = in_ll() - 1;
    ll d = in_ll() - 1;
    x.at(a).at(b) += 1;
    if (c != h - 1 && d != w - 1) {
      x.at(c + 1).at(d + 1) += 1;
    }
    if (d != w - 1) {
      x.at(a).at(d + 1) -= 1;
    }
    if (c != h - 1) {
      x.at(c + 1).at(b) -= 1;
    }
  }

  // w方向へ累積
  rep(i, h) {
    ll count = 0;
    rep(j, w) {
      count += x.at(i).at(j);
      x.at(i).at(j) = count;
    }
  }
  // h方向へ累積
  rep(j, w) {
    ll count = 0;
    rep(i, h) {
      count += x.at(i).at(j);
      x.at(i).at(j) = count;
    }
  }

  rep(i, h) {
    rep(j, w) {
      cout << x.at(i).at(j);
      if (j != w-1) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  }
}
