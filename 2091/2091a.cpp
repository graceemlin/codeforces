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

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    map<int, int> date;
    date[0] = 3;
    date[2] = 2;
    date[1] = 1;
    date[3] = 1;
    date[5] = 1;

    int res{};
    for (int i = 0; i < n; ++i) {      
      if (date[a[i]] > 0) {
	--date[a[i]];
      }

      if (date[a[i]] == 0) {
	date.erase(a[i]);
      }

      if (date.size() == 0) {
	res = i + 1;
	break;
      }
    }

    cout << res << endl;
  }
}
