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

    vector<int> present(n);
    for (int i = 0; i < n; ++i) {
      cin >> present[i];
    }
    
    unordered_map<int, int> frequencies;
    for (int i = 0; i < n; ++i) {
      frequencies[present[i]]++;
    }

    int score = 0;
    for (const auto& [element, frequency]: frequencies) {
      if (frequency > 1) {
	score += (frequency - (frequency % 2)) / 2; 
      }
    }
    
    cout << score << endl;
  }
}
