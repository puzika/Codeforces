#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, k;
  std::cin >> n >> k;

  std::string s;
  std::cin >> s;

  std::string res;

  int open = k / 2;
  int close = open;

  for (char& c: s) {
    if (c == '(' && open > 0) {
      res += '(';
      open--;
    } else if (c == ')' && close > 0) {
      res += ')';
      close--;
    }
  }

  std::cout << res << '\n';

  return 0;
}
