#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  double n, r;
  std::cin >> n >> r;

  double angle = 2 * std::acos(0.0) / n;
  double angleSine = std::sin(angle);

  std::cout << std::setprecision(10) << (angleSine * r) / (1 - angleSine) << '\n';

  return 0;
}
