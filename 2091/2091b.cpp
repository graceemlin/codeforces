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

    vector<int64_t> skill(n);
    for (int i = 0; i < n; ++i) {
      cin >> skill[i];
    }

    sort(skill.rbegin(), skill.rend());
    int64_t right_pointer = 0;
    int64_t left_pointer = 0;

    int64_t teams{};
    while (left_pointer < n && right_pointer < n) {
      if (skill[left_pointer] > x) {
	++teams;
	++left_pointer;
	++right_pointer;
	continue;
      }

      while (right_pointer < n && (skill[right_pointer] * (right_pointer - left_pointer + 1)) < x) {
	++right_pointer;
      }

      if (right_pointer == n) {
	break;
      }

      ++teams;
      left_pointer = right_pointer;       
      ++left_pointer;
      ++right_pointer;
    }

    cout << teams << endl;
  }
}
