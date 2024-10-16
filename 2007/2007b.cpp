#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;
    long long m;
    cin >> m;

    vector<long long> integers(n);

    for (int i = 0; i < n; ++i) {
      cin >> integers[i];
    }

    int answer = 0;
    for (int i = 0; i < n; ++i) {
      if (integers[i] > answer) {
	answer = integers[i];
      }
    }
    
    while (m--) {
      char c;
      cin >> c;
      
      long long l;
      cin >> l;
      long long r;
      cin >> r;

      if (c == '+') {
	if (answer >= l && answer <= r) {
	  ++answer;
	}
      }
      
      if (c == '-') {
	if (answer >= l && answer <= r) {
	  --answer;
	}
      }
      
      cout << answer << " ";
    }
    
    cout << endl;
  }
}
