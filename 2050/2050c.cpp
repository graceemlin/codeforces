#include <bits/stdc++.h>
#include <climits>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    string num;
    cin >> num;

    int64_t sum{};
    int64_t stored_two{};
    int64_t stored_three{};
    for (int i = 0; i < num.size(); ++i) {
      sum += num[i] - '0';
      if (num[i] == '2') {
	++stored_two;
      } else if (num[i] == '3') {
	++stored_three;
      }
    }

    if (sum % 9 == 0) {
      cout << "YES" << endl;
      continue;
    }

    bool found = false;
    for (int i = 0; i <= stored_two; ++i) {
      for (int j = 0; j <= stored_three; ++j) {
	if ((sum + i * 2 + j * 6) % 9 == 0) {
	  found = true;
	}
      }
      
      if (found) {
	break;
      }
    }

    cout << (found ? "YES" : "NO") << endl;
  }
}
