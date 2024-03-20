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
  string s = in_str();
  map<char, ll> c_count;
  rep(i, s.length()) {
    if (c_count.count(s.at(i))) {
      c_count[s.at(i)]++;
    } else {
      c_count[s.at(i)] = 1;
    }
  }

  ll ans = 0;
  unordered_set<string> done_cc;
  for (auto p : c_count) {
    auto c = p.first;
    auto count = p.second;
    for (auto p_ : c_count) {
      auto c_ = p_.first;
      if (c == c_)
        continue;

      auto count_ = p_.second;
      string cc, cc_;
      cc += c;
      cc_ += c_;
      cc += c_;
      cc_ += c;
      if (done_cc.count(cc) || done_cc.count(cc_))
        continue;

      ans += count * count_;
      // cout << c << " " << count << " " << c_ << " " << count_ << endl;
      done_cc.insert(cc);
      done_cc.insert(cc_);
    }
  }
  bool all_one = true;
  for (auto p : c_count) {
    if (p.second != 1)
      all_one = false;
  }
  if (!all_one) {
    ans++;
  }
  cout << ans << endl;

  // for (auto p : c_place) {
  //   auto key = p.first;
  //   auto value = p.second;
  //   for (auto index : value) {
  //     for (auto p_ : c_place) {
  //       auto key_ = p_.first;
  //       auto value_ = p_.second;

  //       for (auto index_ : value_) {
  //         if (index == index_)
  //           continue;
  //               }
  //     }
  //   }
  // }

  // for (auto s__: set_s) {
  //   cout << s__ << endl;
  // }

  // for (ll i = 0; i < s.length() - 1; i++) {
  //   char c = s.at(i);
  //   for (ll j = i + 1; j < s.length(); j++) {
  //     string swapped = s;
  //     swapped.at(i) = swapped.at(j);
  //     swapped.at(j) = c;
  //     set_s.insert(swapped);
  //   }
  // }
  // cout << set_s.size() << endl;
}
