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
  ll N = in_ll();
  vector<vector<ll>> dp(2009, vector<ll>(2009));
  // dp[l][r]: 左端l右端rの状態になるまでに得る最大値
  // 一番左のブロックを取り除いたときそのブロックのPがl<=P<=rなら得点
  // 一番右のブロックを取り除いたときそのブロックのPがl<=P<=rなら得点
  // dp[l][r] = max(dp[l-1][r]+score, dp[l][r+1]+score)
  vector<ll> P(2009);
  vector<ll> A(2009);
  for (ll i = 1; i <= N; i++) {
    cin >> P.at(i) >> A.at(i);
  }
  dp.at(1).at(N) = 0;
  for (ll LEN = N - 2; LEN >= 0; LEN--) {
    for (ll l = 1; l <= N - LEN; l++) {
      ll r = l + LEN;
      ll score1 = 0, score2 = 0;
      if (l <= P.at(l - 1) && P.at(l - 1) <= r)
        score1 = A.at(l - 1);
      if (l <= P.at(r + 1) && P.at(r + 1) <= r)
        score2 = A.at(r + 1);
      if (l == 1) {
        dp.at(l).at(r) = dp.at(l).at(r + 1) + score2;
      } else if (r == N) {
        dp.at(l).at(r) = dp.at(l - 1).at(r) + score1;
      } else {
        dp.at(l).at(r) =
            max(dp.at(l - 1).at(r) + score1, dp.at(l).at(r + 1) + score2);
      }
    }
  }
  ll answer = 0;
  for (ll i = 1; i <= N; i++) {
    answer = max(answer, dp.at(i).at(i));
  }
  cout << answer << "\n";
}
