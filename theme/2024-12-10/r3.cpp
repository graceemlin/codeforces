#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  double n;
  cin >> n;

  double sum{};
  for (int i = 1; i <= n; ++i) {
    sum += (1.0 / i);
  }

  cout << sum << endl;
}
