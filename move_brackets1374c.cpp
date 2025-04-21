#include <iostream>

int main() {
  int testCases;

  std::cin >> testCases;

  for (int i = 0; i < testCases; i++) {
    int n;
    std::string parantheses;
    int res = 0;
    int open = 0;
    int close = 0;

    std::cin >> n;
    std::cin >> parantheses;

    for (char p: parantheses) {
      if (p == '(') open++;
      else if (open > close) close++;
      else res++;
    }

    std::cout << res << '\n';
  }

  return 0;
}
