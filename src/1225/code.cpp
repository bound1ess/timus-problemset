#include <iostream>

using namespace std;

const int N = 50;
long long memo[N];

long long solve(int n) {
  if (memo[n] != 0ll) {
    return memo[n];
  }

  long long answer = n <= 2 ? 2ll : solve(n - 1) + solve(n - 2);
  return memo[n] = answer;
}

int main() {
  //freopen("in.txt", "r", stdin);
  int n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}
