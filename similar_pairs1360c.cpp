#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int t;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    int even = 0;
    int odd = 0;
    bool hasOneDiff = false;
    std::vector<int> arr;

    std::cin >> n;

    for (int j = 0; j < n; j++) {
      int e;

      std::cin >> e;

      if (e % 2 == 0) even++;
      else odd++;

      arr.push_back(e);
    }

    if (even % 2 == 0 && odd % 2 == 0) {
      std::cout << "YES" << '\n';
      continue;
    }

    std::sort(arr.begin(), arr.end());

    for (int j = 0; j < arr.size() - 1 && !hasOneDiff; j++) {
      hasOneDiff = (arr[j + 1] - arr[j]) == 1;
    }

    if (hasOneDiff) std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
  }

  return 0;
}
