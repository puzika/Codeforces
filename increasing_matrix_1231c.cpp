#include <iostream>
#include <limits>

int main() {
  int n, m;
  long long sum = 0;
  bool valid = true;
  std::cin >> n >> m;

  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> arr[i][j];
    }
  }

  for (int i = n - 1; i >= 0 && valid; i--) {
    for (int j = m - 1; j >= 0 && valid; j--) {
      int right = j + 1 >= m ? std::numeric_limits<int>::max() : arr[i][j + 1];
      int left = j - 1 < 0 ? std::numeric_limits<int>::min() : arr[i][j - 1];
      int bottom = i + 1 >= n ? std::numeric_limits<int>::max() : arr[i + 1][j];
      int top = i - 1 < 0 ? std::numeric_limits<int>::min() : arr[i - 1][j];

      if (arr[i][j] == 0) {
        arr[i][j] = std::min(arr[i + 1][j], arr[i][j + 1]) - 1;

        if (arr[i][j] <= arr[i - 1][j] || arr[i][j] <= arr[i][j - 1]) {
          valid = false;
        }
      } else {
        valid = (
          (arr[i][j] < right && arr[i][j] < bottom) &&
          (arr[i][j] > left && arr[i][j] > top)
        );
      }

      sum += arr[i][j];
    }
  }

  if (valid) std::cout << sum << '\n';
  else std::cout << -1 << '\n';

  return 0;
}
