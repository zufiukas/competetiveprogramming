#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k1, k2, k3, ans;
  cin >> n;
  ans = 0;
  for (int i = 1; i <= n; i++) {
    cin >> k1 >> k2 >> k3;
    if (k1 + k2 + k3 >= 2)
      ans++;
  }
  cout << ans;
  return 0;
}
