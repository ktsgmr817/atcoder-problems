#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; (i) < (int)n; ++(i))
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
  string str = in_str();
  vector<string> splitted;
  stringstream ss{str};
  string s;
  while (getline(ss, s, '|')) {
    splitted.push_back(s);
  }
  if (str.at(str.size() - 1) == '|') {
    splitted.push_back("");
  }

  cout << splitted.at(0) << splitted.at(2) << "\n";

  // cout << s.substr(0, 1) << "\n";
  // vector<string> ss = split(s, '|');
  // cout << ss.at(0) << ss.at(2) << "\n";
}
