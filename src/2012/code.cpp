#include <cstdio>

int main() {
  //freopen("in.txt", "r", stdin);
  int n, m;
  scanf("%d", &n);
  m = 4 * 60 / 45;
  printf(m + n >= 12 ? "YES\n" : "NO\n");
  return 0;
}
