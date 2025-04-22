#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int n;
  std::vector<int> arr;
  std::vector<int> inc;
  std::vector<int> dec;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int elem;

    std::cin >> elem;

    arr.push_back(elem);
  }

  std::sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i++) {
    if (inc.empty() || inc.back() < arr[i]) {
      inc.push_back(arr[i]);
      arr[i] = -1;
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] == -1) continue;

    if (dec.empty() || dec.back() > arr[i]) dec.push_back(arr[i]);
    else {
      std::cout << "NO" << '\n';
      return 0;
    }
  }

  std::cout << "YES" << '\n';

  std::cout << inc.size() << '\n';

  for (int e: inc) std::cout << e << " ";

  std::cout << '\n' << dec.size() << '\n';

  for (int e: dec) std::cout << e << " ";

  std::cout << '\n';

  return 0;
}
