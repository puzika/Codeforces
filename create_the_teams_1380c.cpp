#include <iostream>
#include <algorithm>
#include <limits>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n, x;
    std::cin >> n >> x;

    int arr[n];

    for (int i = 0; i < n; i++) std::cin >> arr[i];

    std::sort(arr, arr + n, std::greater<int>());

    int mn = std::numeric_limits<int>::max();
    int teamSize = 0;
    int teams = 0;

    for (int& e: arr) {
      mn = std::min(mn, e);
      teamSize++;

      if (teamSize * mn >= x) {
        mn = std::numeric_limits<int>::max();
        teamSize = 0;
        teams++;
      }
    }

    std::cout << teams << '\n';
  }

  return 0;
}
