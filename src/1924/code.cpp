#include <cstdio>

int main() {
  //freopen("in.txt", "r", stdin);
  int n;
  scanf("%d", &n);
  printf(((n + 1) / 2) % 2 == 0 ? "black\n" : "grimy\n");
  return 0;
}
