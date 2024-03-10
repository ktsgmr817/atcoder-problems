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
  // ll a = in_ll();
  string s = "abcde";
  string tmp(s);
  cout << tmp.erase(tmp.size() - ((string) "e").size()) << endl;
  string tmp2(s);
  cout << tmp2.erase(tmp2.size() - ((string) "de").size()) << endl;
}
