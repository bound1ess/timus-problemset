#include <cstdio>

const int N = 1000;
int a[N];

inline int mod_bin_pow(int base, int exp, int mod) {
  int ans = 1;

  while (exp) {
    if (exp & 1) {
      ans = (ans * base) % mod;
    }

    base = (base * base) % mod;
    exp >>= 1;
  }

  return ans % mod;
}

int main() {
  //freopen("in.txt", "r", stdin);
  int n, m, y, ans = 0;
  scanf("%d%d%d", &n, &m, &y);

  for (int i = 0; i < m; ++i) {
    if (mod_bin_pow(i, n, m) == y) {
      a[ans] = i;
      ++ans;
    }
  }

  if (ans < 1) {
    printf("-1\n");
    return 0;
  }

  for (int i = 0; i < ans - 1; ++i) {
    printf("%d ", a[i]);
  }

  printf("%d\n", a[ans - 1]);
  return 0;
}
