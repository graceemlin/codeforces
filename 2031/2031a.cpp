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

    vector<int> pillars(n);
    for (int i = 0; i < n; ++i) {
      cin >> pillars[i];
    }

    unordered_map<int, int> heights_and_frequencies;
    for (int i = 0; i < n; ++i) {
      heights_and_frequencies[pillars[i]]++;
    }

    int most_frequent_height = 0;
    for (const auto& [height, frequency]: heights_and_frequencies) {
      if (frequency > most_frequent_height) {
	most_frequent_height = frequency;
      }
    }

    int operations = n - most_frequent_height;
    cout << operations << endl;
  }
}
