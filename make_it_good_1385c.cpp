#include <iostream>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }

    int prev = -1;
    int i = n - 1;

    for (; i >= 0; i--) {
      if (arr[i] < prev) break;

      prev = arr[i];
    }

    for (; i >= 0; i--) {
      if (arr[i] > prev) break;

      prev = arr[i];
    }

    std::cout << i + 1 << '\n';
  }

  return 0;
}
