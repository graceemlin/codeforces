#include <bits/stdc++.h>
#include <algorithm>
#include <cstdint>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int m;
    cin >> m;

    map<int, int> freq;
    vector<vector<int>> days(m);
    for (int i = 0; i < m; ++i) {
      int participant_count;
      cin >> participant_count;

      for (int j = 0; j < participant_count; ++j) {
        int participant_id;
        cin >> participant_id;
        
        freq[participant_id]++;
        days[i].push_back(participant_id);
      }
    }

    bool possible = true;
    vector<int> winners(m);
    for (int i = 0; i < m; ++i) {
      bool day_winner = false;
      for (int j = 0; j < days[i].size(); ++j) {
        if (freq[days[i][j]] == 1 && !day_winner) {
          day_winner = true;
          winners[i] = days[i][j];
        }
        --freq[days[i][j]];
      }

      if (!day_winner) {
        possible = false;
        break;
      }
    }

    if (!possible) {
      cout << -1 << endl;
    } else {
      for (int winner: winners) {
        cout << winner << ' ';
      }

      cout << endl;
    }
  }
}
