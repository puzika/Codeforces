#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int t;
  std::cin >> t;

  for (; t > 0; t--) {
    int n, m;
    std::cin >> n >> m;

    std::string s;
    std::cin >> s;

    int attempts[m];
    std::vector<long long> freq(26, 0);

    for (int i = 0; i < m; i++) std::cin >> attempts[i];

    std::sort(attempts, attempts + m);

    for (char& c: s) freq[c - 'a']++;

    int inc = 1;

    while (m > 0) {
      int curr = attempts[--m] - 1;
      int next = m - 1 >= 0 ? attempts[m - 1] - 1: -1;

      while (curr > next) freq[s[curr--] - 'a'] += inc;

      inc++;
    }

    for (int& f: freq) std::cout << f << " ";

    std::cout << '\n';
  }

  return 0;
}
