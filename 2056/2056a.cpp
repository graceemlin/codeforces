#include <bits/stdc++.h>

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

    vector<int> x_values(n);
    vector<int> y_values(n);
    for (int i = 0; i < n; ++i) {
      cin >> x_values[i];
      cin >> y_values[i];
    }

    int64_t x_sum = m;
    int64_t y_sum = m;

    for (int i = 1; i < n; ++i) {
      x_sum += x_values[i];
      y_sum += y_values[i];
    }

    int64_t perimeter = x_sum * 2 + y_sum * 2;
    cout << perimeter << endl;
  }
}
