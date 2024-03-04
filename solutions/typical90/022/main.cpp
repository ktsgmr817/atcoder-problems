#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// x >= yの条件
ll get_gcd(ll x, ll y) {
  if (y == 0)
    return x;
  else
    return get_gcd(y, x % y);
}

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll tmp = get_gcd(max(a, b), min(a, b));
  ll gcd = get_gcd(max(tmp, c), min(tmp, c));
  ll sum = (a / gcd - 1) + (b / gcd - 1) + (c / gcd - 1);
  cout << sum << endl;
}
