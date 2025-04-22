#include <iostream>
#include <vector>

int main() {
  int t;

  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    int maxRepeatCount = 1;
    int elemCount = 0;
    std::cin >> n;
    std::vector<int> arr(n + 1);

    for (int i = 0; i < n; i++) {
      int e;
      std::cin >> e;

      if (arr[e] == 0) elemCount++;

      arr[e]++;
      maxRepeatCount = std::max(maxRepeatCount, arr[e]);
    }

    if (maxRepeatCount > elemCount) std::cout << elemCount << '\n';
    else if (maxRepeatCount == elemCount) std::cout << elemCount - 1 << '\n';
    else std::cout << maxRepeatCount << '\n';
  }

  return 0;
}
