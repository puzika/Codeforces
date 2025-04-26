#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, x, y;
  std::cin >> n >> x >> y;

  std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

  for (int i = 0; i < n; i++) {
    int e;
    std::cin >> e;

    pq.push(e);
  }

  if (x > y) {
    std::cout << n << '\n';
    return 0;
  }

  bool turnPolice = true;

  while (!pq.empty() && !(turnPolice && pq.top() > x)) {
    if (turnPolice) {
      pq.pop();
      turnPolice = false;
    } else {
      int e = pq.top();
      pq.pop();
      pq.push(e + y);
      turnPolice = true;
    }
  }

  std::cout << n - pq.size() << '\n';

  return 0;
}
