#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    std::cin >> n;

    std::vector<int> arr;
    int mn = std::numeric_limits<int>::max();

    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;

      mn = std::min(mn, x);
      arr.push_back(x);
    }

    std::vector<int> divisibles;

    for (int i = 0; i < n; i++) {
      if (arr[i] % mn == 0) divisibles.push_back(arr[i]);
    }

    std::sort(divisibles.begin(), divisibles.end());

    for (int i = 0, j = 0; i < n && j < divisibles.size(); i++) {
      if (arr[i] % mn == 0) {
        arr[i] = divisibles[j];
        j++;
      }
    }

    std::string isSortable = "YES";

    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        isSortable = "NO";
        break;
      }
    }

    std::cout << isSortable << '\n';
  }

  return 0;
}
