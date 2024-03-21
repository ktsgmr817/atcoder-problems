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
const ll infl = 9223372036854775807;

int main() {
  ll d = in_ll();
  ll x_max = ceil(sqrt(d));
  ll min_abs = infl;
  for (ll x = 0; x <= x_max; x++) {
    if (x * x == d) {
      min_abs = 0;
    } else {
      ll y1 = ceil(sqrt(d - x * x));
      min_abs = min(min_abs, llabs(x * x + y1 * y1 - d));
      ll y2 = floor(sqrt(d - x * x));
      min_abs = min(min_abs, llabs(x * x + y2 * y2 - d));
    }
  }
  cout << min_abs << endl;
}
