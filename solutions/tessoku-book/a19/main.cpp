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
  const ll N = in_ll();
  const ll W = in_ll();
  vector<ll> w(109);
  vector<ll> v(109);
  vector<vector<ll>> dp(109, vector<ll>(100009));
  for (ll i = 1; i <= N; i++) {
    w.at(i) = in_ll();
    v.at(i) = in_ll();
  }
  for (ll i = 0; i <= N; i++) {
    for (ll j = 0; j <= W; j++) {
      dp.at(i).at(j) = -1'000'000'000'000'000LL;
    }
  }
  // 動的計画法
  dp.at(0).at(0) = 0;
  for (ll i = 1; i <= N; i++) {
    for (ll j = 0; j <= W; j++) {
      if (j - w.at(i) >= 0)
        dp.at(i).at(j) =
            max(dp.at(i - 1).at(j - w.at(i)) + v.at(i), dp.at(i - 1).at(j));
      else
        dp.at(i).at(j) = dp.at(i - 1).at(j);
    }
  }
  ll answer = 0;
  for (ll j = 0; j <= W; j++) {
    answer = max(dp.at(N).at(j), answer);
  }
  cout << answer << endl;
}
