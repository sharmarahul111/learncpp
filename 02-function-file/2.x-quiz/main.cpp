#include "io.h"
int add(int, int);
int main() {
  int x{readNumber()};
  int y{readNumber()};
  int sum{add(x, y)};
  writeAnswer(sum);
}
int add(int x, int y) { return x + y; }
