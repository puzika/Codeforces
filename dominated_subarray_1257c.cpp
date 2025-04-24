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

    int res = n + 1;
    std::vector<int> last(n + 1, -1);

    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;

      if (last[x] != -1) res = std::min(res, i - last[x] + 1);

      last[x] = i;
    }

    if (res == n + 1) std::cout << -1 << '\n';
    else std::cout << res << '\n';
  }

  return 0;
}
