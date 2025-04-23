#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    long long prev = -1;
    long long os = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
      long long e;
      std::cin >> e;

      if (prev > e) os += prev - e;

      prev = e;
    }

    std::cout << os << '\n';
  }

  return 0;
}
