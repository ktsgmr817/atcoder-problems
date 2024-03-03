#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPalindrome(string str, long low, long high) {
  return (low >= high) ||
         (str[low] == str[high] && isPalindrome(str, low + 1, high - 1));
}

// bool check(ll n) {
//     string s = to_string(n);
//     string t = s;
//     reverse(t.begin(), t.end());
//     return s == t;
// }

int main() {
  ll n;
  cin >> n;
  ll max = ceil(pow(n, 1.0 / 3.0));
  for (int i = max; i > 0; i--) {
    long cubic = pow(i, 3);
    string str = to_string(cubic);
    if (cubic <= n && isPalindrome(str, 0, str.length() - 1)) {
      cout << str << endl;
      break;
    }
  }
}
