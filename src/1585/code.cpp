#include <iostream>
#include <string>

using namespace std;

const string names[] = {"Little Penguin", "Emperor Penguin", "Macaroni Penguin"};

int main() {
  //freopen("in.txt", "r", stdin);
  int n, l = 0, e = 0, m = 0;
  string name, tmp;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> name >> tmp;

    if (name[0] == 'L') {
      ++l;
    } else if (name[0] == 'E') {
      ++e;
    } else {
      ++m;
    }
  }

  if (l > e && l > m) {
    cout << names[0];
  } else if (e > l && e > m) {
    cout << names[1];
  } else {
    cout << names[2];
  }

  cout << endl;
  return 0;
}
