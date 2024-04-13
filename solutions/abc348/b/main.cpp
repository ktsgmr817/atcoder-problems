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
  vector<vector<ll>> xy(n, vector<ll>(2));
  rep(i, n) {
    ll x = in_ll();
    ll y = in_ll();
    xy.at(i).at(0) = x;
    xy.at(i).at(1) = y;
  }

  rep(i, n) {
    vector<ll> vec = xy.at(i);
    ll max_i = -1;
    ll max_dis = -1;
    rep(j, n) {
      vector<ll> vec_j = xy.at(j);
      ll distance = (vec.at(0) - vec_j.at(0)) * (vec.at(0) - vec_j.at(0)) +
                    (vec.at(1) - vec_j.at(1)) * (vec.at(1) - vec_j.at(1));
      
      if (max_dis < distance) {
        // cout << vec_j.at(0) << " " << vec_j.at(1) << endl;
        max_dis = distance;
        max_i = j + 1;
      }
    }
    cout << max_i << "\n";
  }
}
