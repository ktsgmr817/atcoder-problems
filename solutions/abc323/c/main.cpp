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
  ll m = in_ll();
  // 問題の得点
  vector<ll> points(m);
  map<ll, vector<ll>> points_index;
  rep(i, m) {
    points.at(i) = in_ll();
    if (points_index.count(points.at(i))) {
      points_index.at(points.at(i)).push_back(i);
    } else {
      points_index[points.at(i)] = {i};
    }
  }

  ll max_point = 0;
  vector<ll> max_persons;
  // 正解した問題番号
  map<ll, vector<ll>> status;
  // 得点
  vector<ll> score(n);
  rep(i, n) {
    string s = in_str();
    ll point_i = i + 1;
    vector<ll> collects;
    rep(j, s.size()) {
      if (s.at(j) == 'o') {
        point_i += points.at(j);
        collects.push_back(j);
      }
    }
    status[i] = collects;
    score.at(i) = point_i;
    if (point_i > max_point) {
      max_point = point_i;
      max_persons = {i};
    } else if (point_i == max_point) {
      max_persons.push_back(i);
    }
  }
  // rep(i, n) {
  //   for (auto ie : status.at(i)) {
  //     cout << ie << endl;
  //   }
  //   cout << endl;
  // }
  // cout << max_point << endl;

  points.erase(unique(all(points)), points.end());
  sort(all(points), greater<ll>());
  rep(i, n) {
    ll score_i = score.at(i);
    ll add_i = 0;
    auto itp = find(all(max_persons), i);
    if (itp != max_persons.end()) {
      if (max_persons.size() == 1) {
        cout << 0 << "\n";
      } else {
        cout << 1 << "\n";
      }
      continue;
    }

    for (ll point : points) {
      vector<ll> index = points_index.at(point);
      for (ll p_i : index) {
        if (score_i <= max_point) {
          auto it = find(all(status.at(i)), p_i);
          if (it == status.at(i).end()) { // 正解してなければ加算
            score_i += point;
            add_i++;
          }
        }
      }
    }
    cout << add_i << "\n";
  }
}
