#include <cstdio>

const int N = 1000;
int a[N], b[N];

int main() {
  //freopen("in.txt", "r", stdin);
  int n, max = 0, index = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }

  for (int i = 0; i < n - 2; ++i) {
    b[i] = a[i] + a[i + 1] + a[i + 2];

    if (b[i] > max) {
      max = b[i];
    }
  }

  for (int i = 0; i < n - 2; ++i) {
    if (a[i] + a[i + 1] + a[i + 2] == max) {
      index = i + 2;
    }
  }

  printf("%d %d\n", max, index);
  return 0;
}
