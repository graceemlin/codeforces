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
    int64_t m;
    cin >> m;
    
    int64_t r;
    cin >> r;
    int64_t c;
    cin >> c;

    int64_t diag_dist = m;
    int64_t diags_count = n - r;
    int64_t grid_size = n * m;
    int64_t people_before = m * (r - 1) + c;
    int64_t manhattan_dist = diag_dist * diags_count + grid_size - people_before - diags_count;
    
    cout << manhattan_dist << endl;
  }
}
