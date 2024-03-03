#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> points(n, 0);
  map<ll, ll> status;
  status[0] = n;

  for (ll i = 0; i < t; i++) {
    ll a, b;
    cin >> a >> b;
    ll prev = points.at(a - 1);
    ll next = prev + b;
    points.at(a - 1) = next;
    if (status.at(prev) == 1) {
      status.erase(prev);
    } else {
      status.at(prev) -= 1;
    }
    if (status.count(next)) {
      status.at(next) += 1;
    } else {
      status[next] = 1;
    }
    cout << status.size() << endl;
  }
}
