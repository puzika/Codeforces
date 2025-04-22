#include <iostream>

int main() {
  unsigned long long int res = 0;
  unsigned long long int prev = 1;
  int n;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    prev *= 2;
    res += prev;
  }

  std::cout << res << '\n';

  return 0;
}
