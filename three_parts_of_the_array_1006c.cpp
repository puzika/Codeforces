#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n;
  std::cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) std::cin >> arr[i];

  long long maxSum = 0;
  long long sumLeft = 0;
  long long sumRight = 0;
  int left = 0;
  int right = n - 1;

  while (left <= right) {
    if (sumLeft < sumRight) {
      sumLeft += arr[left];
      left++;
    } else {
      sumRight += arr[right];
      right--;
    }

    if (sumLeft == sumRight) maxSum = sumLeft;
  }

  std::cout << maxSum << '\n';

  return 0;
}
