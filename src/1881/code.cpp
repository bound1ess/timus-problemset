#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
  //freopen("in.txt", "r", stdin);
  int h, w, n, ans = 0;
  cin >> h >> w >> n;
  queue<int> q;
  string word;

  for (int i = 0; i < n; ++i) {
    cin >> word;
    q.push((int) word.length());
  }

  int line = -1, lines = 1;

  while ( ! q.empty()) {
    if (line + 1 + q.front() <= w) {
      line += q.front() + 1;
      q.pop();
    } else {
      if (lines + 1 <= h) {
        ++lines;
      } else {
        ++ans;
        lines = 0;
      }

      line = -1;
    }
  }

  if (line > 0) {
    ++ans;
  }

  cout << ans << endl;
  return 0;
}
