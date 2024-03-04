#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  vector<ll> b(n);
  for (ll i = 0; i < n; i++)
    cin >> a.at(i);
  ll sum = k;
  for (ll i = 0; i < n; i++) {
    cin >> b.at(i);
    sum -= llabs(b.at(i) - a.at(i));
    if (sum < 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  string result = (sum % 2 == 0) ? "Yes" : "No";
  cout << result << endl;
}
