#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, q;
  std::cin >> n >> q;

  std::priority_queue<int, std::vector<std::pair<int, std::vector<int>>>, std::greater<std::pair<int, std::vector<int>>>> taken;
  std::priority_queue<int, std::vector<int>, std::greater<int>> free;

  for (int i = 1; i <= n; i++) free.push(i);

  for (int i = 0; i < q; i++) {
    int t, k, d;

    std::cin >> t >> k >> d;

    while (!taken.empty() && taken.top().first <= t) {
      auto servers = taken.top().second;
      taken.pop();

      for (int& s: servers) free.push(s);
    }

    if (free.size() >= k) {
      long long sum = 0;
      std::vector<int> servers;

      while (servers.size() < k) {
        int x = free.top();
        servers.push_back(x);
        free.pop();
        sum += x;
      }

      taken.push({t + d, servers});

      std::cout << sum << '\n';
    } else {
      std::cout << -1 << '\n';
    }
  }

  return 0;
}
