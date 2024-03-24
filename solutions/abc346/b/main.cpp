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
  int w, b;
  cin >> w >> b;
  set<vector<int>> wb;
  string wb_string = "wbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbw";
  wb.insert({0, 0});
  for (int i = 0; i < 36; i++) {
    for (int j = i; j < 36; j++) {
      string sub = wb_string.substr(i, j - i + 1);
      int w_c = 0, b_c = 0;
      for (char s : sub) {
        if (s == 'w') {
          w_c++;
        } else if (s == 'b') {
          b_c++;
        }
        wb.insert({w_c, b_c});
      }
    }
  }
  // for (auto wb_ : wb) {
  //   cout << wb_[0] << " " << wb_[1] << endl;
  // }
  // cout << wb.size() << endl;

  int w_remain = w % 21;
  int w_sho = w / 21;
  int b_remain = (w_sho > 0 ? b - w_sho * 15 : b);

  if (wb.count({w_remain, b_remain})) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}
