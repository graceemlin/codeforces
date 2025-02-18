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

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    map<int, int> book;
    for (int i = 0; i < n; ++i) {
      ++book[elements[i]];
    }

    if (n == 1) {
      cout << 1 << ' ' << 1 << endl;
      continue;
    }
    
    int answer_longest{};
    int answer_left_bound{};
    int answer_right_bound{};

    int local_longest{};
    int local_left_bound{};
    int local_right_bound{};

    bool in_candidate_sequence = false;
    for (int i = 0; i < n; ++i) {
      if (in_candidate_sequence) {
	 if (book[elements[i]] == 1) {
	  ++local_longest;
	  ++local_right_bound;
	 } else {
	   in_candidate_sequence = false;
	 }
      } else if (book[elements[i]] == 1) {
	  in_candidate_sequence = true;
	  local_longest = 1;
	  local_left_bound = i;
	  local_right_bound = i;
      }

      if (local_longest > answer_longest) {
	answer_longest = local_longest;
	answer_left_bound = local_left_bound;
	answer_right_bound = local_right_bound;
      }
    }

    bool removal_sequence_found = answer_longest != 0;
    if (removal_sequence_found == false) {
      cout << 0 << endl;
    } else {
      cout << answer_left_bound + 1 << ' ' << answer_right_bound + 1 << endl;
    }
  }
}
