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
    int64_t x;
    cin >> x;
    int64_t k;
    cin >> k;

    string s;
    cin >> s;

    const int64_t distance_to_origin = 0 - x;
    int64_t steps{};
    int64_t offset{};
    bool reaches_origin = false;
    for (const char command: s) {
      ++steps;
      if (command == 'R') {
	++offset;
      } else {
	--offset;
      }

      if (offset == distance_to_origin) {
	reaches_origin = true;
	k = k - steps;
	break;
      }
    }

    int64_t result{};
    if (reaches_origin) {
      ++result;
      
      int64_t cycle_length{};
      int64_t position{};
      bool cycle_found = false;
      for (const char command: s) {
	++cycle_length;
	if (command == 'R') {
	  ++position;
	} else {
	  --position;
	}
	
	if (position == 0) {
	  cycle_found = true;
	  break;
	}
      }

      if (cycle_found) {
	result += (k / cycle_length);
      }
    }
    
    cout << result << endl;
  }
}
