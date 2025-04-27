#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, m, k;
  std::cin >> n >> m >> k;

  std::string seats[n];

  for (int i = 0; i < n; i++) {
    std::cin >> seats[i];
  }

  int ways = 0;

  for (int i = 0; i < n; i++) {
    int series = 0;

    for (int j = 0; j < m; j++) {
      if (seats[i][j] == '.') series++;
      else {
        if (series >= k) ways += series - k + 1;
        series = 0;
      }
    }

    if (series >= k) ways += series - k + 1;
  }

  if (k == 1) {
    std::cout << ways << '\n';
    return 0;
  }

  for (int j = 0; j < m; j++) {
    int series = 0;

    for (int i = 0; i < n; i++) {
      if (seats[i][j] == '.') series++;
      else {
        if (series >= k) ways += series - k + 1;
        series = 0;
      }
    }

    if (series >= k) ways += series - k + 1;
  }

  std::cout << ways << '\n';

  return 0;
}
