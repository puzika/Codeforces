#include <iostream>

int main() {
  int testCases;

  std::cin >> testCases;

  for (int i = 0; i < testCases; i++) {
    unsigned long long n;
    unsigned long long res = 0;

    std::cin >> n;

    for (unsigned long long j = 1; n >= 3; j++, n -= 2) {
      res += ((n - 2) * j + j * j) * 4;
    }

    std::cout << res << '\n';
  }

  return 0;
}
