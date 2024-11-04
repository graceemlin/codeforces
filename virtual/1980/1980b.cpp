#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int f;
    cin >> f;
    int k;
    cin >> k;

    vector<int> cubes(n + 1);
    for (int i = 1; i <= n; ++i) {
      cin >> cubes[i];
    }

    if (k == n) {
      cout << "YES" << endl;
      continue;
    }
    
    int fav_val = cubes[f];

    sort(cubes.begin() + 1, cubes.end(), greater());

    if (cubes[k] == fav_val && cubes[k + 1] == fav_val) {
      cout << "MAYBE" << endl;
    } else {
      cout << (cubes[k] > fav_val ? "NO" : "YES") << endl;
    }
  }
}
