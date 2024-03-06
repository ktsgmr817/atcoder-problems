#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool ans = true;
  for (int i = 0; i < s.length(); i++) {
    if ((i == 0 && !isupper(s.at(i))) || (i != 0 && isupper(s.at(i)))) {
      ans = false;
      break;
    }
  }
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
