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

    vector<int> switches(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
      cin >> switches[i];
    }

    int switches_on = 0;
    for (int state : switches) {
      if (state == 1) {
          ++switches_on;
      }
    }

    int min_lights = switches_on % 2;
    int max_lights = n - abs(switches_on - n);

    cout << min_lights << ' ' << max_lights << endl;
  }
}
