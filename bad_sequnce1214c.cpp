#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n;
  std::cin >> n;

  std::string brs;
  std::cin >> brs;

  if (n % 2 != 0) {
    std::cout << "NO" << '\n';
    return 0;
  }

  int totalO = 0;
  int totalC = 0;
  int c = 0;
  int o = 0;
  int toMove = 0;

  for (int i = 0; i < n && toMove <= 1; i++) {
    if (brs[i] == '(') {
      totalO++;
      o++;
    } else {
      totalC++;
      c++;

      if (o < c) {
        toMove++;
        c--;
      }
    }
  }

  if (toMove > 1 || totalO != totalC) std::cout << "NO" << '\n';
  else std::cout << "YES" << '\n';

  return 0;
}
