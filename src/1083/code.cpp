#include <iostream>
#include <string>

using namespace std;

int main() {
  //freopen("in.txt", "r", stdin);
  string s;
  int n, k, ans = 1;
  cin >> n >> s;
  k = s.length();

  if (n % k == 0) {
    for (int i = 0; n - i * k != 0; ++i) {
      ans *= n - i * k;
    }
  } else {
    for (int i = 0; n - i * k != n % k; ++i) {
      ans *= n - i * k;
    }

    ans *= n % k;
  }

  cout << ans << endl;
  return 0;
}
