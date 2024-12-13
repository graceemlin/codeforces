#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int64_t n;
  cin >> n;

  if (n % 2) {
    cout << 0 << endl;
  } else {
    int64_t result = n / 4 - (n % 4 == 0);
    cout << result << endl;
  }
}
