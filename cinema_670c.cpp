#include <iostream>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0), std::cout.tie(0);

  int n;
  std::cin >> n;

  std::unordered_map<int, int> freq;

  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;

    if (freq.find(x) == freq.end()) freq[x] = 0;

    freq[x] = freq[x] + 1;
  }

  int m;
  std::cin >> m;

  int audio[m];
  int subtitles[m];

  for (int i = 0; i < m; i++) std::cin >> audio[i];
  for (int i = 0; i < m; i++) std::cin >> subtitles[i];

  int res = 0;

  for (int i = 1; i < m; i++) {
    if (freq[audio[i]] > freq[audio[res]] || (freq[audio[i]] == freq[audio[res]] && freq[subtitles[i]] > freq[subtitles[res]])) {
      res = i;
    }
  }

  std::cout << res + 1 << '\n';

  return 0;
}
