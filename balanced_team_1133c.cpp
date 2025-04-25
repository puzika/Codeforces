#include <iostream>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n;
  std::cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) std::cin >> arr[i];

  std::sort(arr, arr + n);

  int left = 0;
  int right = 0;
  int res = 1;

  while (right < n) {
    if (arr[right] - arr[left] > 5) left++;
    else {
      res = std::max(res, right - left + 1);
      right++;
    }
  }

  std::cout << res << '\n';

  return 0;
}
