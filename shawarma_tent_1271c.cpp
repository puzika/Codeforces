#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n, sx, sy;
  std::cin >> n >> sx >> sy;

  long long top = 0, bottom = 0, left = 0, right = 0;

  for (int i = 0; i < n; i++) {
    int x, y;
    std::cin >> x >> y;

    if (x < sx) left++;
    else if (x > sx) right++;

    if (y < sy) bottom++;
    else if (y > sy) top++;
  }

  long long mx = std::max(std::max(top, bottom), std::max(left, right));
  int px = sx, py = sy;

  if (mx == top) py++;
  else if (mx == bottom) py--;
  else if (mx == left) px--;
  else px++;

  std::cout << mx << '\n' << px << " " << py << '\n';

  return 0;
}
