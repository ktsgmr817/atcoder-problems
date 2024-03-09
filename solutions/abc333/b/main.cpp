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

int change(char s) {
  switch (s) {
  case 'A':
    return 0;
    break;
  case 'B':
    return 1;
    break;
  case 'C':
    return 2;
    break;
  case 'D':
    return 3;
    break;
  case 'E':
    return 4;
    break;
  default:
    return 0;
    break;
  }
}

int main() {
  string ss = in_str();
  vector<int> ss_int(2);
  string tt = in_str();
  vector<int> tt_int(2);
  rep(i, 2) {
    ss_int[i] = change(ss[i]);
    tt_int[i] = change(tt[i]);
  }
  int diff_ss = abs(ss_int[0] - ss_int[1]);
  int diff_tt = abs(tt_int[0] - tt_int[1]);
  if (diff_ss >= 3)
    diff_ss = 5 - diff_ss;
  if (diff_tt >= 3)
    diff_tt = 5 - diff_tt;

  if (diff_ss == diff_tt)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
