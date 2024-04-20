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
  string t = in_str();
  // if (t.at(2) == 'X') {
  //   size_t one = s.find(tolower(t.at(0)));
  //   size_t two = s.find(tolower(t.at(1)));
  //   cout << ((one != string::npos && two != string::npos && one < two)
  //                ? "Yes\n"
  //                : "No\n");
  // } else {
  // size_t one = s.find(tolower(t.at(0)));
  // size_t two = s.find(tolower(t.at(1)));
  // size_t three = s.find(tolower(t.at(2)));
  char one_c = tolower(t.at(0));
  char two_c = tolower(t.at(1));
  char three_c = tolower(t.at(2));
  ll one_min_i = 1e9;
  vector<ll> two_i;
  ll three_max_i = -1;
  rep(i, s.size()) {
    char c = s.at(i);
    if (c == one_c)
      one_min_i = min(one_min_i, i);
    if (c == two_c)
      two_i.push_back(i);
    if (c == three_c)
      three_max_i = max(three_max_i, i);
  }

  if (one_min_i == 1e9 || two_i.size() == 0) {
    cout << "No\n";
    return 0;
  }
  if (t.at(2) != 'X' && three_max_i == -1) {
    cout << "No\n";
    return 0;
  }
  for (auto t_i : two_i) {
    if (one_min_i < t_i && t_i < three_max_i) {
      cout << "Yes\n";
      return 0;
    }
  }
  if (t.at(2) == 'X') {
    for (auto t_i : two_i) {
      if (one_min_i < t_i) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  // cout << "Last\n";
  cout << "No\n";
  return 0;
}
