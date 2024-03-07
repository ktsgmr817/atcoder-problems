#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
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
string decimalToXBase(int decimalNumber, int base) {
  if (decimalNumber == 0)
    return "0";

  string result = "";
  while (decimalNumber > 0) {
    int remainder = decimalNumber % base;
    char digit = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
    result = digit + result;
    decimalNumber /= base;
  }
  return result;
}

int main() {
  ll n = in_ll();
  rep(x, n + 1) {
    rep(y, n + 1) {
      rep(z, n + 1) {
        if (x + y + z <= n) {
          cout << x << " " << y << " " << z << endl;
        }
      }
    }
  }
}
