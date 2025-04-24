#include <iostream>
#include <vector>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    std::cin >> n;

    int arr[n];
    int res[2 * n];
    std::vector<int> visited(2 * n + 1, 0);
    bool valid = true;

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
      visited[arr[i]] = 1;
    }

    for (int i = 0; i < n && valid; i++) {
      res[2 * i] = arr[i];

      int second = -1;

      for (int j= arr[i] + 1; j < 2 * n + 1; j++) {
        if (visited[j] == 0) {
          second = j;
          visited[j] = 1;
          break;
        }
      }

      if (second == -1) valid = false;

      res[2 * i + 1] = second;
    }

    if (!valid) std::cout << -1;

    for (int i = 0; i < 2 * n && valid; i++) std::cout << res[i] << " ";

    std::cout << '\n';
  }

  return 0;
}
