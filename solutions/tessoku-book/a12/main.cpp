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

ll get_number_seconds(vector<ll> a, ll seconds) {
  ll sum = 0;
  rep(i, a.size()) { sum += seconds / a.at(i); }
  return sum;
}

int main() {
  ll n = in_ll();
  ll k = in_ll();
  vector<ll> a(n);
  rep(i, n) { a.at(i) = in_ll(); }

  ll left = 0;
  ll right = 1'000'000'000;
  while (left < right) {
    ll center = (left + right) / 2;
    ll numbers = get_number_seconds(a, center);
    if (numbers < k) {
      left = center + 1;
    } else {
      right = center;
    }
  }
  cout << left << endl;
}
