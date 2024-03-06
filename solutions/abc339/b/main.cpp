#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll h, w, n;
  cin >> h >> w >> n;
  vector<vector<ll>> grid(h, vector<ll>(w, 0));
  vector<int> now = {0, 0, 0};

  for (ll i = 0; i < n; i++) {
    if (grid.at(now.at(0)).at(now.at(1)) == 0) {
      grid.at(now.at(0)).at(now.at(1)) = 1;
      now.at(2) = (now.at(2) + 1) % 4;
      if (now.at(2) == 0) {
        if (now.at(0) == 0) {
          now.at(0) = h - 1;
        } else {
          now.at(0) -= 1;
        }
      } else if (now.at(2) == 1 || now.at(2) == -3) {
        if (now.at(1) == w - 1) {
          now.at(1) = 0;
        } else {
          now.at(1) += 1;
        }
      } else if (now.at(2) == 2 || now.at(2) == -2) {
        if (now.at(0) == h - 1) {
          now.at(0) = 0;
        } else {
          now.at(0) += 1;
        }
      } else {
        if (now.at(1) == 0) {
          now.at(1) = w - 1;
        } else {
          now.at(1) -= 1;
        }
      }
    } else {
      grid.at(now.at(0)).at(now.at(1)) = 0;
      now.at(2) = (now.at(2) - 1) % 4;
      if (now.at(2) == 0) {
        if (now.at(0) == 0) {
          now.at(0) = h - 1;
        } else {
          now.at(0) -= 1;
        }
      } else if (now.at(2) == 1 || now.at(2) == -3) {
        if (now.at(1) == w - 1) {
          now.at(1) = 0;
        } else {
          now.at(1) += 1;
        }
      } else if (now.at(2) == 2 || now.at(2) == -2) {
        if (now.at(0) == h - 1) {
          now.at(0) = 0;
        } else {
          now.at(0) += 1;
        }
      } else {
        if (now.at(1) == 0) {
          now.at(1) = w - 1;
        } else {
          now.at(1) -= 1;
        }
      }
    }
  }

  for (ll i = 0; i < h; i++) {
    for (ll j = 0; j < w; j++) {
      if (grid.at(i).at(j) == 0) {
        cout << '.';
      } else {
        cout << '#';
      }
    }
    cout << endl;
  }
}
