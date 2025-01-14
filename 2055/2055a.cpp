#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int b;
    cin >> b;

    cout << ((b - a) % 2 ? "NO" : "YES") << endl;
  }
}
