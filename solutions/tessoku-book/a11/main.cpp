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

// vectorの中からxが何番目に存在するかを返す
// ll binary_search(vector<ll> vec, ll x) {
//   ll left = 0;
//   ll right = vec.size() - 1;
//   while (left <= right) {
//     ll center = vec.at((right + left) / 2);
//     if (x > center) {
//       left = (right + left) / 2 + 1;
//     } else if (x < center) {
//       right = (right + left) / 2 - 1;
//     } else {
//       return (right + left) / 2;
//     }
//   }
//   return -1;
// }

ll binary_search(vector<ll> vec, ll x) {
  auto pos = lower_bound(vec.begin(), vec.end(), x);
  if (pos < vec.end() && *pos == x)
    return distance(vec.begin(), pos);
  else
    return -1;
}

int main() {
  ll n = in_ll();
  ll x = in_ll();
  vector<ll> a(n);
  rep(i, n) { a.at(i) = in_ll(); }
  ll answer = binary_search(a, x);
  cout << answer + 1 << endl;
}
