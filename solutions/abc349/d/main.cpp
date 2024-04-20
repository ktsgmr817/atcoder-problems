#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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

ll powerOfTwoDivisible(ll n) {
  ll count = 0;
  while (n % 2 == 0) {
    n /= 2;
    count++;
  }
  return count;
}

ll pow_2(ll n) {
  ll ans = 1;
  rep(i, n) { ans *= 2; }
  return ans;
}

int main() {
  ll L = in_ll();
  ll R = in_ll();
  vector<vector<ll>> answer;
  ll l = L;
  ll r = R;
  while (true) {
    // lが2の最大何乗で割り切れるか
    ll count = 0;
    ll l_tmp = l;
    while (true) {
      ll p2 = pow_2(count);
      ll i = l_tmp / p2;
      ll r_tmp = p2 * (i + 1);
      if (l_tmp % 2 == 0 && r_tmp % (p2 * 2) == 0) {
        l_tmp /= 2;
        count++;
      } else {
        break;
      }
    }
    ll i = l / pow_2(count);
    r = pow_2(count) * (i + 1);
    answer.push_back({l, r});
    l = r;
    if (r == R) {
      break;
    }
  }
  cout << answer.size() << "\n";
  rep(i, answer.size()) {
    cout << answer.at(i).at(0) << " " << answer.at(i).at(1) << "\n";
  }
}
