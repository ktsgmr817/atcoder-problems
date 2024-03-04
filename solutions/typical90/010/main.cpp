#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, q;
  cin >> n;
  vector<ll> sum1(n);
  vector<ll> sum2(n);
  ll tmp1 = 0;
  ll tmp2 = 0;
  for (int i = 0; i < n; i++) {
    ll c, p;
    cin >> c >> p;
    if (c == 1)
      tmp1 += p;
    else
      tmp2 += p;
    sum1.at(i) = tmp1;
    sum2.at(i) = tmp2;
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    if (l == 1) {
      cout << sum1.at(r - 1) << ' '
           << sum2.at(r - 1) << endl;
    } else {
      cout << sum1.at(r - 1) - sum1.at(l - 2) << ' '
           << sum2.at(r - 1) - sum2.at(l - 2) << endl;
    }
  }
}
