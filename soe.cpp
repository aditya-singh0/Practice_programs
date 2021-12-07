// Sieve
int N = 1e6 + 7;
vector<int> pr; // store all primes till N
vector<int> fcnt; // factor count of each number
vector<bool> prime; // true for prime numbers
vector<int> spf; // smallest prime factor
void sieve() {
	prime.assign(N, true);
	spf.resize(N);
	fcnt.resize(N);
 
	prime[1] = false;
	prime[0] = false;
	for (int p = 2; p < N; p++) {
		if (prime[p]) {
			spf[p] = p;
			for (int i = p + p; i <= N; i += p) {
				prime[i] = false; // not prime
				if (spf[i] == 0) {
					spf[i] = p; // first divisor of i
				}
			}
		}
	}
 
	for (int p = 2; p <= N; p++) { // storing primes
		if (prime[p]) {
			pr.push_back(p);
		}
	}

   for (int i = 2; i < N; ++i) { // counting factors of i
	   fcnt[i] = fcnt[i / spf[i]] + 1;
   }

//factors till a point
   for (int i = 1; i < N; ++i) {
	   fcnt[i] += fcnt[i - 1];
   }
}