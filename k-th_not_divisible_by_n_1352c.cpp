#include <iostream>
#include <cmath>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    double n, k;
    std::cin >> n >> k;

    long long res = std::ceil(k / (n - 1)) + k - 1;

    std::cout << res << '\n';
  }

  return 0;
}
