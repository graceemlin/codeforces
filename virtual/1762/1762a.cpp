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

    vector<long long> elements(n);    
    for (long long i = 0; i < n; ++i) {
      cin >> elements[i];
    }
    
    long long sum = accumulate(elements.begin(), elements.end(), 0);

    if (sum % 2 == 0) {
      cout << 0 << endl;
      continue;
    }

    long long ops = 0;
    
    bool parity_change_detected = false;
    while (!parity_change_detected) {
      ++ops;
      for (long long i = 0; i < n; ++i) {
	bool original_parity = elements[i] % 2;	
	elements[i] /= 2;
	
	bool curr_parity = elements[i] % 2;	
	if (curr_parity != original_parity) {
	  parity_change_detected = true;
	  break;
	}
      }
    }

    cout << ops << endl;
  }
}
