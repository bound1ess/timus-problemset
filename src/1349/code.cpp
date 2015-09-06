#include <cstdio>

const int N = 101;
int cache[N];

inline int pow(int base, int exp) {
  if (cache[base] != 0) {
    return cache[base];
  }

  int ans = 1, orig_base = base;

  while (exp) {
    if (exp & 1) {
      ans *= base;
    }

    base *= base;
    exp >>= 1;
  }

  return cache[orig_base] = ans;
}

int main() {
  //freopen("in.txt", "r", stdin);
  int n;
  scanf("%d", &n);

  if (n != 1 && n != 2) {
    printf("-1\n");
    return 0;
  }

  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < N; ++j) {
      if (i == j) {
        continue;
      }

      for (int k = 1; k < N; ++k) {
        if (i == k || j == k) {
          continue;
        }

        if (pow(i, n) + pow(j, n) == pow(k, n)) {
          printf("%d %d %d\n", i, j, k);
          return 0;
        }
      }
    }
  }

  printf("-1\n");
  return 0;
}
