#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  //freopen("in.txt", "r", stdin);
  vector<long long> nums;
  long long n;

  while (cin >> n) {
    if (n == -1LL) break;
    nums.push_back(n);
  }

  for (int i = nums.size() - 1u; i >= 0; --i) {
    printf("%.4f\n", sqrt(nums[i]));
  }

  return 0;
}
