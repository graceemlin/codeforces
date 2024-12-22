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

    vector<int> mono(n);
    for (int i = 0; i < n; ++i) {
      cin >> mono[i];
    }

    vector<int> stereo(n);
    for (int i = 0; i < n; ++i) {
      cin >> stereo[i];
    }

    int max_diff = mono.back();
    for (int i = 0; i < n - 1; ++i) {
      if (mono[i] > stereo[i + 1]) {
        max_diff += mono[i] - stereo[i + 1];
      }
    }

    cout << max_diff << endl;
  }
}
