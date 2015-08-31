#include <cstdio>

int main() {
  //freopen("in.txt", "r", stdin);
  int a, b, c;
  scanf("%d%d", &a, &b);
  c = a + b - 1;
  printf("%d %d\n", c - a, c - b);
  return 0;
}
