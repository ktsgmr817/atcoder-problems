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
  ll now;
  vector<ll> aligned;
  map<ll, ll> status;
  rep(i, n) {
    ll key = in_ll();
    status[key] = i + 1;
    if (key == -1) {
      now = i + 1;
      aligned.push_back(now);
    }
  }
  while (true) {
    if (status.count(now)) {
      aligned.push_back(status.at(now));
      now = status.at(now);
    } else {
      break;
    }
  }

  rep(i, n) {
    cout << aligned.at(i);
    if (i != n - 1)
      cout << " ";
  }
  cout << endl;
}
