#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

inline bool compare(const pair<int, int> &first, const pair<int, int> &second) {
  return first.second > second.second;
}

int main() {
  //freopen("in.txt", "r", stdin);
  int n, id, m;
  vector< pair<int, int> > v;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d%d", &id, &m);
    v.push_back(make_pair(id, m));
  }

  stable_sort(v.begin(), v.end(), compare);

  for (int i = 0; i < n; ++i) {
    printf("%d %d\n", v[i].first, v[i].second);
  }

  return 0;
}
