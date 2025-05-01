#include <iostream>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int q;
  std::cin >> q;

  for (; q > 0; q--) {
    std::string s, t, p;
    std::cin >> s >> t >> p;
    std::unordered_map<char, int> needed;

    int is = 0;

    for (int it = 0; it < t.size(); it++) {
      if (is < s.size() && s[is] == t[it]) is++;
      else needed[t[it]]++;
    }

    if (is < s.size()) {
      std::cout << "NO" << '\n';
      continue;
    }

    for (char& c: p) {
      if (needed.find(c) != needed.end()) {
        if (needed[c] > 1) needed[c]--;
        else needed.erase(c);
      }
    }

    if (needed.empty()) std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
  }

  return 0;
}
