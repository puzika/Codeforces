#include <iostream>
#include <algorithm>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) std::cin >> arr[i];

    if (n == 1) {
      std::cout << 0 << '\n';
      continue;
    }

    std::sort(arr, arr + n);

    int lowLim = arr[0] + arr[1];
    int upLim = arr[n - 1] + arr[n - 2];
    int maxCount = 0;

    for (int w = lowLim; w <= upLim; w++) {
      int left = 0;
      int right = n - 1;
      int currCount = 0;

      while (left < right) {
        if (arr[left] + arr[right] == w) {
          left++;
          right--;
          currCount++;
          continue;
        }

        if (arr[left] + arr[right] > w) right--;
        else left++;
      }

      maxCount = std::max(maxCount, currCount);
    }

    std::cout << maxCount << '\n';
  }

  return 0;
}
