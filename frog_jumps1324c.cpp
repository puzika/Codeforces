#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int series = 0;
    int maxSeries = 0;
    std::string word;
    std::cin >> word;

    for (char c: word) {
      if (c == 'L') series++;
      else series = 0;

      maxSeries = std::max(maxSeries, series);
    }

    std::cout << maxSeries + 1 << '\n';
  }

  return 0;
}
