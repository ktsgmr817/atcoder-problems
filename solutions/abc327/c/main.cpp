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
  vector<vector<ll>> a(9, vector<ll>(9));
  rep(i, 9) {
    rep(j, 9) {
      ll new_a = in_ll();
      if (count(a.at(i).begin(), a.at(i).end(), new_a)) {
        cout << "No\n";
        return 0;
      }
      rep(i_, 9) {
        if (a.at(i_).at(j) == new_a) {
          cout << "No\n";
          return 0;
        }
      }
      a.at(i).at(j) = new_a;
    }
  }
  vector<ll> check = {0, 3, 6};
  for (auto i : check) {
    for (auto j : check) {
      unordered_set<ll> ij_set;
      rep(i_, 3) {
        rep(j_, 3) {
          ij_set.insert(a.at(i + i_).at(j + j_));
        }
      }
      if (ij_set.size() != 9) {
        cout << "No\n";
        return 0;
      }
    }
  }
  cout << "Yes\n";
}
