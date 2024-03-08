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
  ll k = in_ll();
  ll count = 0;
  rep(i, n) {
    rep(j, n) {
      ll remain = k - (i + 1) - (j + 1);
      if (remain <= n && remain > 0)
        count++;
    }
  }
  cout << count << endl;
}
