#include <cstdio>
#define FIRST "[:=[first]\n"
#define SECOND "[second]=:]\n"

int main() {
  //freopen("in.txt", "r", stdin);
  int n, m;
  scanf("%d%d", &n, &m);
  printf((n * m - 1) % 2 == 0 ? SECOND : FIRST);
  return 0;
}
