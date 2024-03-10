#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// #define rep(i, n) for (int i = 0; (i) < (n); ++(i))
// #define all(...) std::begin(__VA_ARGS__), std::end(__VA_ARGS__)
// #define rall(...) std::rbegin(__VA_ARGS__), std::rend(__VA_ARGS__)
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
  string t = in_str();
  ll n = in_ll();
  vector<vector<string>> ss(n);
  for (ll i = 0; i < n; i++) {
    ll a = in_ll();
    vector<string> s(a);
    for (ll j = 0; j < a; j++) {
      s.at(j) = in_str();
    }
    ss.at(i) = s;
  }

  map<string, ll> s_tmp;
  for (ll i = n - 1; i >= 0; i--) {
    vector<string> s = ss.at(i);
    // s_tmpの中でsの中に後方一致するものを探す
    for (const auto &[key, value] : s_tmp) {
      for (size_t j = 0; j < s.size(); j++) {
        string key_tmp((string)key);
        if ((key_tmp).ends_with(s.at(j))) {
          string v = (key_tmp).erase((key_tmp).size() - s.at(j).size());
          if (s_tmp.count(v)) {
            if (s_tmp.at(v) > s_tmp.at(key) + 1) {
              s_tmp[v] = s_tmp.at(key) + 1;
              s_tmp.erase(key);
            }
          } else {
            s_tmp[v] = s_tmp.at(key) + 1;
            s_tmp.erase(key);
          }
        }
      }
    }

    for (size_t j = 0; j < s.size(); j++) {
      if (t.ends_with(s.at(j))) {
        string tmp(t);
        string value = tmp.erase(tmp.size() - s.at(j).size());
        s_tmp[value] = 1;
      }
    }
  }

  if (s_tmp.count("")) {
    cout << s_tmp.at("") << endl;
  } else {
    cout << -1 << endl;
  }
}
