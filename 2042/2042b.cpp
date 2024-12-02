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

    vector<int> colors(n);
    for (int i = 0; i < n; ++i) {
      cin >> colors[i];
    }

    map<int, int> book;
    for (int i = 0; i < n; ++i) {
      book[colors[i]]++;
    }

    int alice_score{};
    int one_colors{};
    for (const auto& [color, freq]: book) {
      if (freq == 1) {
        ++one_colors;
      } else {
        ++alice_score;
      }
    }
    
    cout << alice_score + 2 * ceil(one_colors / 2.0) << endl;
  }
}
