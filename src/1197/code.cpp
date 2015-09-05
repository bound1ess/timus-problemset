#include <iostream>
#include <string>

using namespace std;

const int L = 0, R = 7;
const int N = 4, M = 2;

const int shifts[N][M] = {
  {-2, 0}, // move down
  {2, 0}, // move up
  {0, -2}, // move left
  {0, 2} // move right
};

const int next_shift[N][M][M] = {
  {{0, -1}, {0, 1}}, // if we moved down
  {{0, -1}, {0, 1}}, // up
  {{-1, 0}, {1, 0}}, // left
  {{-1, 0}, {1, 0}} // right
};

inline bool check_bounds(int i, int j) {
  return (L <= i && i <= R) && (L <= j && j <= R);
}

inline int solve(int v, int h) {
  int ans = 0;

  for (int i = 0; i < N; ++i) {
    if (check_bounds(v + shifts[i][0], h + shifts[i][1])) {
      for (int j = 0; j < M; ++j) {
        if (check_bounds(
          v + shifts[i][0] + next_shift[i][j][0], h + shifts[i][1] + next_shift[i][j][1])
        ) {
          ++ans;
        }
      }
    }
  }

  return ans;
}

int main() {
  //freopen("in.txt", "r", stdin);
  int n;
  string pos;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> pos;
    cout << solve(pos[0] - 'a', pos[1] - '1') << endl;
  }

  return 0;
}
