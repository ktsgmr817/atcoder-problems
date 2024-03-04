#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  set<string> s;
  string si;
  for (ll i = 0; i < n; i++) {
    cin >> si;
    if (!s.count(si)) {
      s.insert(si);
      cout << i+1 << endl;
    }
  }
}
