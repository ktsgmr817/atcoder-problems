#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
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

bool hasOddDigit(ll number) {
  while (number > 0) {
    ll digit = number % 10;
    if (digit % 2 != 0) {
      return true;
    }
    number /= 10;
  }
  return false;
}

ll getNum(ll count) {
  if (count == 0) {
    return 2;
  } else {
    ll sum = 0;
    for (ll i = 1; i <= count; i++) {
      sum += pow(10, i);
    }
    return sum;
  }
}

int main() {
  ll n = in_ll();
  ll tmp = 0;
  rep(i, n - 1) {
    ll count = 0;
    while (true) {
      tmp += getNum(count);
      if (hasOddDigit(tmp)) {
        count++;
      } else {
        break;
      }
    }
  }
  cout << tmp << endl;
}
