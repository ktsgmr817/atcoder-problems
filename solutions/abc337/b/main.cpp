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
  string s = in_str();
  bool a_done = false;
  bool b_done = false;
  rep(i, s.size()) {
    switch (s.at(i)) {
    case 'A':
      if (a_done) {
        cout << "No" << endl;
        return 0;
      }
      break;
    case 'B':
      a_done = true;
      if (b_done) {
        cout << "No" << endl;
        return 0;
      }
      break;
    case 'C':
      b_done = true;
      break;
    default:
      break;
    }
  }
  cout << "Yes" << endl;
}
