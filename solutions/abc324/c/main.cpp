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

bool is_t_able(string &bigger, string &smaller) {
  if (bigger.size() < smaller.size()) {
    return is_t_able(smaller, bigger);
  }
  if (bigger.size() != smaller.size() + 1) {
    return false;
  }
  ll index_b = 0;
  ll index_s = 0;
  bool diffed = false;
  while (index_b < bigger.size() && index_s < smaller.size()) {
    if (bigger.at(index_b) == smaller.at(index_s)) {
      index_b++;
      index_s++;
      continue;
    } else {
      if (diffed) {
        return false;
      } else {
        diffed = true;
        index_b++;
      }
    }
  }
  return true;
}

int main() {
  ll N = in_ll();
  string T_prime = in_str();
  vector<ll> answer;
  rep(i, N) {
    string s_i = in_str();
    // 1か4
    if (s_i.size() == T_prime.size()) {
      ll diff_count = 0;
      rep(j, s_i.size()) {
        if (s_i.at(j) != T_prime.at(j))
          diff_count++;
      }
      if (diff_count <= 1) {
        answer.push_back(i + 1);
      }
    } else { // 2か3
      if (is_t_able(s_i, T_prime)) {
        answer.push_back(i + 1);
      }
    }
  }

  cout << answer.size() << "\n";
  rep(i, answer.size()) {
    cout << answer.at(i) << (i == answer.size() - 1 ? "" : " ");
  }
  cout << "\n";
}
