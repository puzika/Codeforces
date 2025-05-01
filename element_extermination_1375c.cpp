#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    std::cin >> n;

    int first;
    int last;
    int i = 0;

    while (i < n) {
      if (i == 0) std::cin >> first;
      else if (i == n - 1)  std::cin >> last;
      else {
        int x;
        std::cin >> x;
      }

      i++;
    }

    if (first < last) std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
  }

  return 0;
}
