#include <iostream>
#include <cmath>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  long long mod = 1000000007;

  long long n;
  std::cin >> n;

  long long total = 1;
  long long acyclic = 1;

  for (long long i = 1; i < n; i++) {
    total = (total * i) % mod;
    acyclic = (acyclic * 2) % mod;
  }

  long long res = (total * n) % mod - acyclic;

  if (res < 0) std::cout << res + mod << '\n';
  else std::cout << res << '\n';

  return 0;
}
