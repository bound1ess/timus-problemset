#include <iostream>
#include <string>

using namespace std;

const int N = 3;

const int lengths[N] = {4, 3, 6};

const char sets[N][6] = {
  {'A', 'P', 'O', 'R'},
  {'B', 'M', 'S'},
  {'D', 'G', 'J', 'K', 'T', 'W'},
};

inline int solve(char c, int &at) {
  int pos = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < lengths[i]; ++j) {
      if (sets[i][j] == c) {
        pos = i;
        break;
      }
    }
  }

  int diff = at > pos ? at - pos : pos - at;
  at = pos;

  return diff;
}

int main() {
  //freopen("in.txt", "r", stdin);
  int n, at = 0, ans = 0;
  string name;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> name;
    ans += solve(name[0], at);
  }

  cout << ans << endl;
  return 0;
}
