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

  for (int i = 0; i < n; i += 2) std::cout << arr[i] << " ";

  for (int i = n % 2 == 0 ? n - 1 : n - 2; i >= 1; i -= 2) std::cout << arr[i] << " ";

  std::cout << '\n';

  return 0;
}
