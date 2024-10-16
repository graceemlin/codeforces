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
    int k;
    cin >> k;

    vector<int> people(n);
    for (int i = 0; i < n; ++i) {
      cin >> people[i];
    }

    int stolen = 0;
    int gifted = 0;
    
    for (int wealth: people) {
      if (stolen > 0 && wealth == 0) {
	--stolen;
	++gifted;
      }
      
      if (wealth >= k) {
	stolen += wealth;
      }
    }

    cout << gifted << endl;
  }
}
