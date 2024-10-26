#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    int64_t max_width = 0;
    int64_t max_height = 0;

    for (int i = 0; i < n; ++i) {
      int64_t w;
      cin >> w;
      int64_t h;
      cin >> h;

      max_width = max(max_width, w);
      max_height = max(max_height, h);
    }
    
    int64_t perimeter = 2 * (max_width + max_height);

    cout << perimeter << endl;
  }
}
