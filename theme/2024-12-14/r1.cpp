#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string enemy;
    cin >> enemy;
    string gregor;
    cin >> gregor;

    int promotions{};
    for (int i = 0; i < n; ++i) {
      if (gregor[i] == '1') {
	if (i > 0 && enemy[i - 1] == '1') {
	  ++promotions;
	  enemy[i - 1] = '2';
	} else if (enemy[i] == '0') {
	  ++promotions;
	  enemy[i] = '2';
	} else if (i < n - 1 && enemy[i + 1] == '1') {
	  ++promotions;
	  enemy[i + 1] = '2';
	}
      }
    }

    cout << promotions << endl;
  }
}
