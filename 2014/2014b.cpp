#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;
    long long k;
    cin >> k;

    bool parity = (((n - k) * k) + (k * (k + 1) / 2)) % 2 == 0;

    puts(parity ? "YES" : "NO");
  }
}
