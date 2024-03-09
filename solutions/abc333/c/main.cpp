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
  ll n = in_ll();
  set<ll> answer;
  vector<ll> rep_unit(12);
  rep(i, 12) { rep_unit.at(i) = (pow(10, i + 1) - 1) / 9; }
  rep(i, 12) {
    rep(j, 12) {
      rep(k, 12) {
        answer.insert(rep_unit.at(i) + rep_unit.at(j) + rep_unit.at(k));
      }
    }
  }
  // setのn番目に大きい値
  auto it = answer.begin();
  advance(it, n - 1);

  cout << *it << endl;
}
