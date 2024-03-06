#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str, char del) {
  int first = 0;
  int last = str.find_first_of(del);
  vector<string> result;
  while (first < str.size()) {
    string subStr(str, first, last - first);
    result.push_back(subStr);
    first = last + 1;
    last = str.find_first_of(del, first);
    if (last == string::npos) {
      last = str.size();
    }
  }
  return result;
}

int main() {
  string s;
  cin >> s;
  cout << split(s, '.').back() << endl;
}
