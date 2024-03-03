#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    vector<int> v;
    for (int j = 0; j < n; j++) {
      cin >> a.at(i).at(j);
      if (a.at(i).at(j) != 0)
        v.push_back(j + 1);
    }

    int size = v.size();
    for (int j = 0; j < size; j++) {
      cout << v.at(j);
      if (j != size - 1)
        cout << ' ';
    }
    cout << endl;
  }
}
