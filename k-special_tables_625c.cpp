#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, k;
  std::cin >> n >> k;

  int kth[n];
  kth[0] = n * n - (n - k);
  int sum = kth[0];

  for (int i = 1; i < n; i++) {
    kth[i] = kth[i - 1] - (n - k) - 1;
    sum += kth[i];
  }

  std::cout << sum << '\n';

  int pre_k = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j >= k) std::cout << kth[i - 1] + j - k << ' ';
      else std::cout << pre_k++ << ' ';
    }

    std::cout << '\n';
  }

  return 0;
}
