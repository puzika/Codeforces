#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int q;
  std::cin >> q;

  for (; q > 0; q--) {
    unsigned long long n, m;
    unsigned long long sum = 0;
    unsigned long long chunkSum = 0;
    std::cin >> n >> m;

    unsigned long long remainder = n % (m * 10);

    for (int i = 1; i < 10; i++) {
      int digit = (m * i) % 10;
      chunkSum += digit;

      if (m * i <= remainder) sum += digit;
    }

    std::cout << sum + ((n - remainder) / (m * 10)) * chunkSum << '\n';
  }

  return 0;
}
