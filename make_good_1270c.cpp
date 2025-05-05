#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    std::cin >> n;

    long long sum = 0;
    long long sumXOR = 0;

    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;

      sum += x;
      sumXOR ^= x;
    }

    std::cout << 2 << '\n' << sumXOR << " " << sumXOR + sum << '\n';
  }

  return 0;
}
