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

int main() {
  ll n = in_ll();
  ll m = in_ll();
  string s = in_str();
  ll m_now = m;
  ll logo_now = 0;
  ll logo_shortage_max = 0;
  rep(i, n) {
    char is = s.at(i);
    if (is == '1') {
      if (m_now > 0) {
        m_now--;
      } else {
        logo_now--;
        if (logo_now < -logo_shortage_max) {
          logo_shortage_max = -logo_now;
        }
      }
    } else if (is == '0') {
      m_now = m;
      logo_now = 0;
    } else if (is == '2') {
      logo_now--;
      if (logo_now < -logo_shortage_max) {
        logo_shortage_max = -logo_now;
      }
    }
  }
  cout << logo_shortage_max << endl;
}
