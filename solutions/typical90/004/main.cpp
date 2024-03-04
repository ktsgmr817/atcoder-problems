#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll h, w;
  cin >> h >> w;
  vector<vector<ll>> a(h, vector<ll>(w));
  vector<ll> row_sum(h, 0);
  vector<ll> col_sum(w, 0);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a.at(i).at(j);
      row_sum.at(i) += a.at(i).at(j);
      col_sum.at(j) += a.at(i).at(j);
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      ll total = row_sum.at(i) + col_sum.at(j) - a.at(i).at(j);
      if (j == w - 1) {
        cout << total << endl;
      } else {
        cout << total << ' ';
      }
    }
  }
}
