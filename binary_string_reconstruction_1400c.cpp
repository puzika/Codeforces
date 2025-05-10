#include <iostream>
#include <vector>

std::string solve(std::vector<char>& w, std::string& s, int x) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      if (i - x >= 0) w[i - x] = '0';
      if (i + x < w.size()) w[i + x] = '0';
    }
  }

  std::string res = "";

  for (int i = 0; i < w.size(); i++) {
    if (s[i] == '0' || (s[i] == '1' && ((i - x >= 0 && w[i - x] == '1') || (i + x < w.size() && w[i + x] == '1')))) res += w[i];
    else return "-1";
  }

  return res;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    std::string s;
    std::cin >> s;

    int x;
    std::cin >> x;

    std::vector<char> w(s.size(), '1');

    std::cout << solve(w, s, x) << '\n';
  }

  return 0;
}
