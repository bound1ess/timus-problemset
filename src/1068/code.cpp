#include <cstdio>

int main() {
  //freopen("in.txt", "r", stdin);
  int n, sum = 0;
  scanf("%d", &n);

  if (n <= 0) {
    for (int i = n; i <= 1; ++i) {
      sum += i;
    }
  } else {
    for (int i = n; i >= 1; --i) {
      sum += i;
    }
  }

  printf("%d\n", sum);
  return 0;
}
