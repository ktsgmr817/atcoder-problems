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
  ll x = 0;
  ll y = 0;
  rep(i, n) {
    x += in_ll();
    y += in_ll();
  }
  if (x > y) {
    cout << "Takahashi" << endl;
  } else if (x < y) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
}
