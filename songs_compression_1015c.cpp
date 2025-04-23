#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

int main() {
  int n, m;
  long long total = 0;
  std::cin >> n >> m;
  std::vector<std::pair<int, int>> arr;

  for (int i = 0; i < n; i++) {
    int first, second;
    std::cin >> first >> second;

    total += first;

    arr.push_back({first, second});
  }

  std::sort(arr.begin(), arr.end(), [&](std::pair<int, int>& l, std::pair<int, int>& r) { return l.first - l.second > r.first - r.second; });

  int i = 0;

  for (;i < n && m < total; i++) {
    total -= arr[i].first - arr[i].second;
  }

  if (m >= total) std::cout << i << '\n';
  else std::cout << -1 << '\n';

  return 0;
}
