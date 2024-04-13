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

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int main() {
  ll H = in_ll();
  ll W = in_ll();
  ll N = in_ll();
  string T = in_str();
  vector<vector<char>> s_map(H, vector<char>(W));
  rep(i, H) {
    string s = in_str();
    rep(j, s.size()) { s_map.at(i).at(j) = s.at(j); }
  }

  set<vector<ll>> moved_count;

  for (ll i = 1; i < H - 1; i++) {
    for (ll j = 1; j < W - 1; j++) {
      if (s_map.at(i).at(j) == '#')
        continue;

      // cout << "i, j = " << i << " " << j << endl;
      bool moved_all_t = false;
      bool reached_sea = false;
      vector<ll> current = {i, j};
      // 陸からスタートしあり得るゴール地点を探す
      rep(t, T.size()) {
        ll dx_ij, dy_ij;
        if (T.at(t) == 'L')
          dx_ij = -1, dy_ij = 0;
        else if (T.at(t) == 'R')
          dx_ij = 1, dy_ij = 0;
        else if (T.at(t) == 'U')
          dx_ij = 0, dy_ij = -1;
        else
          dx_ij = 0, dy_ij = 1;

        current = {current.at(0) + dy_ij, current.at(1) + dx_ij};
        // cout << "dy, dx = " << dy_ij << " " << dx_ij << endl;
        // cout << current.at(0) << " " << current.at(1) << endl;
        if (s_map.at(current.at(0)).at(current.at(1)) == '#') {
          reached_sea = true;
          break;
        }
        if (t == T.size() - 1) {
          moved_all_t = true;
        }
      }
      if (moved_all_t && !reached_sea) {
        // cout << current.at(0) << " " << current.at(1) << endl;
        moved_count.insert(current);
      }
    }
  }

  cout << moved_count.size() << "\n";
}
