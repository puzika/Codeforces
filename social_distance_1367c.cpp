#include <iostream>
#include <cmath>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n, k;
    std::cin >> n >> k;

    std::string tables;
    std::cin >> tables;

    int zeros = k;
    int inserted = 0;

    for (char& c: tables) {
      if (c == '0') zeros++;
      else {
        int add = std::floor((1.0 * (zeros - k)) / (1.0 * (k + 1)));
        inserted += add > 0 ? add : 0;
        zeros = 0;
      }
    }

    if (zeros > 0) {
      int add = std::floor((1.0 * zeros) / (1.0 * (k + 1)));
      inserted += add > 0 ? add : 0;
    }

    std::cout << inserted << '\n';
  }

  return 0;
}
