#include <iostream>
#include <limits>

int main() {
  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n;
    int mxNeg = 0;
    int mxPos = 0;
    long long sum = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
      int x;
      std::cin >> x;

      if (x > 0) {
        sum += mxNeg;
        mxNeg = 0;
        mxPos = std::max(mxPos, x);
      } else {
        sum += mxPos;
        mxPos = 0;
        mxNeg = mxNeg == 0 ? x : std::max(mxNeg, x);
      }
    }

    std::cout << sum + mxNeg + mxPos << '\n';
  }

  return 0;
}
