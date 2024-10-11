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
    
    long long sum = 0;
    for (long long element: elements) {
      sum += element;
    }

    if (sum % 2 == 0) {
      cout << 0 << endl;
      continue;
    }

    queue<bool> parity;
    for (long long element: elements) {
      parity.push(element % 2);
    }
    
    long long ops = 0;
    bool parity_change_detected = false;
    while (!parity_change_detected) {
      ++ops;
      for (long long i = 0; i < n; ++i) {
	elements[i] = floor(elements[i] / 2);
	bool curr_parity = elements[i] % 2;	
	bool original_parity = parity.front();
	
	if (curr_parity != original_parity) {
	  parity_change_detected = true;
	  break;
	}

	parity.pop();
	parity.push(original_parity);
      }
    }

    cout << ops << endl;
  }
}
