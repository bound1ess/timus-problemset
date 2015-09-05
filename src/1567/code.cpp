#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> cost;

inline void build_cost_table() {
  int tmp = 1;

  for (char c = 'a'; c <= 'x'; ++c) {
    cost[c] = tmp;

    if (tmp == 3) {
      tmp = 1;
    } else {
      ++tmp;
    }
  }

  // special cases
  cost['y'] = cost[' '] = cost['.'] = 1;
  cost['z'] = cost[','] = 2;
  cost['!'] = 3;
}

int main() {
  //freopen("in.txt", "r", stdin);
  string msg;
  int ans = 0;
  getline(cin, msg);

  build_cost_table();

  for (int i = 0, n = msg.length(); i < n; ++i) {
    //cout << msg[i] << " costs " << cost[msg[i]] << endl;
    ans += cost[msg[i]];
  }

  cout << ans << endl;
  return 0;
}
