#include <iostream>
#include <cmath>
#include <utility>
#include <queue>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, k;
  std::cin >> n >> k;
  std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pqVal;
  std::priority_queue<int, std::vector<int>, std::greater<int>> pqIdx;

  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;

    if (pqVal.size() < k) {
      pqVal.push({x, i});
    } else if (pqVal.top().first < x) {
      pqVal.pop();
      pqVal.push({x, i});
    }
  }

  long long sum = 0;

  while (!pqVal.empty()) {
    sum += pqVal.top().first;
    pqIdx.push(pqVal.top().second);
    pqVal.pop();
  }

  long long res = 1;

  while (pqIdx.size() > 1) {
    unsigned long long first = pqIdx.top();
    pqIdx.pop();
    unsigned long long second = pqIdx.top();
    unsigned long long nextRes = (res * (second - first)) % 998244353;

    if (nextRes > 0) res = nextRes;
  }

  std::cout << sum << ' ' << res << '\n';

  return 0;
}
