#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int a;
    cin >> a;
    int b;
    cin >> b;

    cout << (a * b) / gcd(a, b) << endl;
  }
}
