#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll q;
  cin >> q;
  ll a, b;
  vector<ll> vec;
  for (ll i = 0; i < q; i++) {
    cin >> a >> b;
    if (a == 1) {
      vec.push_back(b);
    } else {
      cout << vec.at(vec.size() - 1 - (b - 1)) << endl;
    }
  }
}
