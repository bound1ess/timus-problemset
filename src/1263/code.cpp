#include <cstdio>

const int N = 12345;
int a[N];

int main() {
  //freopen("in.txt", "r", stdin);
  int n, m, x;
  scanf("%d%d", &n, &m);

  for (int i = 0; i < m; ++i) {
    scanf("%d", &x);
    ++a[x];
  }

  for (int i = 1; i <= n; ++i) {
    printf("%.2f%%\n", a[i] * 1. / m * 100.);
  }

  return 0;
}
