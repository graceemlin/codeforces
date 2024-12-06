#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int c;
    cin >> c;
    int d;
    cin >> d;

    vector<int> maxim(n * n);
    for (int i = 0; i < n * n; ++i) {
      cin >> maxim[i];
    }

    map<int, int> progressive;
    for (int cell: maxim) {
      progressive[cell]++;
    }

    const int origin = *min_element(maxim.begin(), maxim.end());
    
    bool invalid = false;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        const int new_cell = origin + i * c + j * d;
        if (!progressive[new_cell]) {
          invalid = true;
          break;
        } else {
          --progressive[new_cell];
        }
      }
      
      if (invalid) {
        break;
      }
    }

    cout << (invalid ? "NO" : "YES") << endl;
  }
}
