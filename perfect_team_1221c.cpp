#include <iostream>
#include <cmath>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int q;
  std::cin >> q;

  for (; q > 0; q--) {
    int c, m, x;
    int teams = 0;
    std::cin >> c >> m >> x;

    int mn = std::min(c, m);
    int mx = std::max(c, m);
    c = mn;
    m = mn;
    x += mx - mn;
    teams += std::min(mn, x);
    c -= teams;
    m -= teams;

    if (c && m) {
      teams += std::floor((1.0 * (c + m)) / 3.0);
    }

    std::cout << teams << '\n';
  }

  return 0;
}
