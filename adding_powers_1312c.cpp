#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int T;
  std::cin >> T;

  for (; T > 0; T--) {
    int n, k;
    std::cin >> n >> k;

    long long arr[n];
    long long largest = -1;

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
      largest = std::max(arr[i], largest);
    }

    long long curr = 1;

    while (curr * k <= largest) {
      curr *= k;
    }

    bool res = true;

    while (res && curr > 0) {
      int cnt = 0;

      for (int i = 0; i < n && cnt < 2; i++) {
        if (curr <= arr[i]) {
          arr[i] -= curr;
          cnt++;
        }
      }

      res = (cnt <= 1);
      curr /= k;
    }

    for (int i = 0; i < n && res; i++) {
      res = arr[i] == 0;
    }

    if (res) std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
  }

  return 0;
}
