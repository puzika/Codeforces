#include <iostream>
#include <cmath>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, m;
  std::cin >> n >> m;

  int x = 0;
  x += std::abs(n - m);
  int mn = std::min(n, m);
  m = mn;
  n = mn;

  if (x >= n) {
    std::cout << n << '\n';
  } else {
    int steps = std::ceil((1.0 * (n - x)) / 3.0);
    n -= steps;
    x += 2 * steps;
    std::cout << std::min(n, x) << '\n';
  }


  return 0;
}
