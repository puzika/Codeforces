#include <iostream>
#include <cmath>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  long long n;
  std::cin >> n;
  long long sum = (n * (n + 1)) / 2;
  long long half = std::floor((1.0 * sum) / 2.0);

  int diff = sum % 2 == 0 ? 0 : 1;

  std::cout << diff << '\n';

  std::vector<int> group;

  while (half > n) {
    group.push_back(n);
    half -= n;
    n--;
  }

  group.push_back(half);

  std::cout << group.size() << " ";

  for (int& x: group) std::cout << x << " ";

  std::cout << '\n';

  return 0;
}
