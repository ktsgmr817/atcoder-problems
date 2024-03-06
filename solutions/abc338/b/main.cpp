#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> count(26, 0);
  int max_count = 0;
  int max_char = 97;
  for (int i = 0; i < s.length(); i++) {
    count.at(int(s.at(i)) - 97) += 1;
  }
  for (int i = 0; i < count.size(); i++) {
    if (max_count < count.at(i)) {
      max_count = count.at(i);
      max_char = i;
    }
  }
  cout << char(max_char + 97) << endl;
}
