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
  string S = in_str();
  string T = in_str();
  // i,jまでに到達するまでに通る、赤い辺の本数の最大値
  vector<vector<int>> dp(2009, vector<int>(2009, 0));
  for (int i = 1; i <= (int)S.size(); i++) {
    for (int j = 1; j <= (int)T.size(); j++) {
      if (S.at(i - 1) == T.at(j - 1)) {
        int tmp_max = max(dp.at(i - 1).at(j), dp.at(i).at(j - 1));
        dp.at(i).at(j) = max(tmp_max, dp.at(i - 1).at(j - 1) + 1);
      } else {
        dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i).at(j - 1));
      }
    }
  }
  cout << dp.at(S.size()).at(T.size()) << "\n";
}
