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
// 移動方向の配列（上下左右）
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int main() {
  ll H = in_ll();
  ll W = in_ll();
  vector<vector<ll>> field(H, vector<ll>(W, -1));
  vector<ll> start(2);
  vector<ll> end(2);
  rep(i, H) {
    rep(j, W) {
      char point;
      cin >> point;
      if (point == 'S')
        start = {i, j};
      if (point == 'T')
        end = {i, j};

      field.at(i).at(j) = (point == '#' ? -1 : 0);
    }
  }
  ll N = in_ll();
  vector<vector<ll>> drag(H, vector<ll>(W, 0));
  ll r, c, e;
  rep(i, N) {
    cin >> r >> c >> e;
    drag.at(r - 1).at(c - 1) = e;
  }

  vector<vector<ll>> dist(H, vector<ll>(W, 1e9));
  vector<vector<bool>> visited(H, vector<bool>(W, false));
  queue<vector<ll>> q;
  q.push(start);
  visited.at(start.at(0)).at(start.at(1)) = true;
  dist.at(start.at(0)).at(start.at(1)) = 0;
  while (!q.empty()) {
    vector<ll> current = q.front();
    q.pop();

    // ゴールに到達した場合、最短経路が見つかったのでループを終了
    if (current.at(0) == end.at(0) && current.at(1) == end.at(1))
      break;

    // 上下左右に移動して探索
    for (int dir = 0; dir < 4; ++dir) {
      ll nx = current.at(0) + dx[dir];
      ll ny = current.at(1) + dy[dir];
      // 移動可能かどうかをチェック
      if (nx >= 0 && nx < H && ny >= 0 && ny < W && field[nx][ny] != -1 &&
          !visited[nx][ny]) {
        q.push({nx, ny});
        visited[nx][ny] = true;
        dist[nx][ny] = dist[current.at(0)][current.at(1)] + 1;
      }
    }
  }

  // rep(i, H) {
  //   rep(j, W) { cout << drag.at(i).at(j) << (j == W - 1 ? "\n" : " "); }
  // }

  ll power = 0;
  queue<vector<ll>> q_2;
  q_2.push(start);
  while (!q_2.empty()) {
    vector<ll> current = q_2.front();
    q_2.pop();

    // ゴールに到達した場合、最短経路が見つかったのでループを終了
    if (current.at(0) == end.at(0) && current.at(1) == end.at(1)) {
      break;
    }

    ll current_dist = dist[current.at(0)][current.at(1)];

    if (power < drag.at(current.at(0)).at(current.at(1))) {
      power = drag.at(current.at(0)).at(current.at(1));
      // cout << "回復: " << power << endl;
    }

    // 上下左右に移動して探索
    for (int dir = 0; dir < 4; ++dir) {
      ll nx = current.at(0) + dx[dir];
      ll ny = current.at(1) + dy[dir];
      // 移動可能かどうかをチェック(distが1大きくなる方向へ進む)
      if (nx >= 0 && nx < H && ny >= 0 && ny < W && field[nx][ny] != -1 &&
          dist[nx][ny] == current_dist + 1 && power > 0) {
        q_2.push({nx, ny});
        power--;
        // cout << nx << " " << ny << " " << power << endl;
        if (nx == end.at(0) && ny == end.at(1) && power >= 0) {
          cout << "Yes\n";
          return 0;
        }
      }
    }
  }
  cout << "No\n";
  return 0;
}
