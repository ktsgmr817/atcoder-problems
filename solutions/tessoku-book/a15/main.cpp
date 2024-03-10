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

// vecの中でxが何番目にあるかを2分探索で探してindexを返す
ll binary_search(vector<ll>& vec, ll x) {
  return lower_bound(vec.begin(), vec.end(), x) - vec.begin();
}

int main() {
  ll n = in_ll();
  vector<ll> a(n);
  vector<ll> sorted_no_dup_a(n);
  vector<ll> answer(n);
  rep(i, n) {
    ll num = in_ll();
    a.at(i) = num;
    sorted_no_dup_a.at(i) = num;
  }
  sort(all(sorted_no_dup_a));
  sorted_no_dup_a.erase(unique(all(sorted_no_dup_a)), sorted_no_dup_a.end());

  rep(i, n) {
    ll index = binary_search(sorted_no_dup_a, a.at(i));
    answer.at(i) = index + 1;
  }
  rep(i, n) {
    cout << answer.at(i);
    if (i == n - 1)
      cout << "\n";
    else
      cout << " ";
  }
}
