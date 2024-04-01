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
  ll q = in_ll();
  // 1~nがそれぞれ何回目のクエリで登場したか
  vector<vector<ll>> a_count(200009);
  vector<ll> size(200009);
  unordered_set<ll> tmp;
  ll tmp_size = 0;
  rep(i, q) {
    ll x_i = in_ll();
    a_count.at(x_i).push_back(i + 1);
    if (tmp.count(x_i)) {
      tmp.erase(x_i);
    } else {
      tmp.insert(x_i);
    }
    tmp_size += tmp.size();
    size.at(i + 1) = tmp_size;
    // cout << i + 1 << " " << tmp_size << endl;
  }
  for (ll i = 1; i <= n; i++) {
    // iが登場したクエリの回数を2つずつ(登場と削除)回していき、sizeから累積和を計算
    ll a_i_sum = 0;
    for (ll a_i = 0; a_i < a_count.at(i).size(); a_i += 2) {
      ll insert = a_count.at(i).at(a_i);
      if (a_i + 1 == a_count.at(i).size()) {
        a_i_sum += size.at(q) - size.at(insert - 1);
      } else {
        ll deleted = a_count.at(i).at(a_i + 1);
        a_i_sum += size.at(deleted - 1) - size.at(insert - 1);
      }
    }
    cout << a_i_sum << (i != n ? " " : "\n");
  }
}

// 削除されなかったときはlastのsize-追加されたときの前のsize
// 削除されたときは削除されたときの前のsize-追加されたときの前のsize
