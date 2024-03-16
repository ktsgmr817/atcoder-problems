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
  ll k = in_ll();
  ll g = in_ll();
  ll m = in_ll();
  ll g_now = 0;
  ll m_now = 0;
  rep(i, k) {
    if (g_now == g) {
      g_now = 0;
    } else if (m_now == 0) {
      m_now = m;
    } else {
      ll g_remain = g - g_now;
      if (g_remain >= m_now) {
        g_now += m_now;
        m_now = 0;
      } else {
        g_now = g;
        m_now -= g_remain;
      }
    }
  }
  cout << g_now << " " << m_now << "\n";
}
