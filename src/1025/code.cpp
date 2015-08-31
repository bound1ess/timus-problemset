#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  //freopen("in.txt", "r", stdin);
  int n, x;
  scanf("%d", &n);
  vector<int> v;

  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    v.push_back(x);
  }

  sort(v.begin(), v.end());
  int ans = 0;

  for (int i = 0; i < n / 2 + 1; ++i) {
    ans += v[i] / 2 + 1;
  }

  printf("%d\n", ans);
  return 0;
}
