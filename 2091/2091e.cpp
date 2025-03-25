#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  const int64_t n_bound = pow(10, 7) + 1;
  vector<bool> sieve(n_bound, false);
  for (int64_t i = 2; i <= n_bound; ++i) {
    if (!sieve[i]) {
      for (int64_t j = i * i; j <= n_bound; j += i) {
	sieve[j] = true;
      }
    }
  }
    
  while (t--) {
    int64_t n;
    cin >> n;

    vector<int64_t> primes;
    for (int64_t i = 2; i <= n; ++i) {
      if (!sieve[i]) {
	primes.push_back(i);
      }
    }

    int64_t result{};
    for (int64_t i = 0; i < primes.size(); ++i) {
      result += n / primes[i];
    }

    cout << result << endl;
  }
}
