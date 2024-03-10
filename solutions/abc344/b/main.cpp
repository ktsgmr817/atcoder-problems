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
  vector<ll> a;
  while (true) {
    a.push_back(in_ll());
    if (a.at(a.size() - 1) == 0)
      break;
  }
  for (ll i = a.size() - 1; i >= 0; i--) {
    cout << a.at(i) << endl;
  }
}
