    bool IS_PRIME(ll n){
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (ll i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;

        return true;
    }

    bool isPrime(ll n){
        if(n==2)
            return true;
        if(n<2 || n%2==0)
            return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)
                return false;
        }
        return true;
    }

    ll sieve(ll n){
        vector<bool>primes(n+1, true);
        primes[0] = primes[1] = false;
        for(int i=2; i*i<=n; i++){
            if(primes[i]){
                for(int j=i*i; j<=n; j+=i){
                    primes[i] = false;
                }
            }
        }

        int cnt=0;
        for(bool it : primes){
            cnt += it;
        }
        return cnt;
    }

    const int siz=1e6+6;
    bool composite[siz+1];
    vector<int>prime;

    void linear_sieve() {
        composite[0]=composite[1]=true;
        for (int i=2; i<=siz; ++i) {
            if (!composite[i]) {
                prime.push_back(i);
            }
            for (int j=0; j<(int)prime.size()&&i*prime[j]<=siz; ++j) {
                composite[i * prime[j]] = true;
                if (i%prime[j]==0) break;
            }
        }
    }


    const int siz = 1e6+10;
    const int R = siz;
    const int L = 100;
    bool composite[siz];
    void segmentedSieve(){
        for(ll i=2; i*i<=R; i++){
            for(ll j = max(i*i, (L+i-1) / i*i ); j<=R ; j+=i){
                composite[j-L]=true;
            }
        }
    }

    void primeFactorization(ll n){
        vector<ll>primeFactors;

        while(n % 2 == 0){
            primeFactors.push_back(2);
            n /= 2;
        }
        for(ll i=3; i*i<=n; i+=2){
            while(n % i == 0){
                primeFactors.push_back(i);
                n /= i;
            }
        }
        if(n > 1)
            primeFactors.push_back(n);

        for(auto it : primeFactors){
            cout << it << " ";
        }
    }

    ll divisors(ll n){
        ll res=0;

        for(ll i=1; i*i<=n; i++){
            if(n%i==0){
                if(i==(n/i))
                    res++;
                else
                    res += 2;
            }
        }
        return res;
    }

    bool isCircularPrime(ll n){
        string s = to_string(n);
        unsigned ll t = s.size();
        unsigned ll digits = t;
        while(t--){
            int x = n % 10;
            n /= 10;
            n += x * pow(10 , digits - 1);
            if(!isPrime[n]) {
                return false;
            }
        }

        return true;
    }

    // Function to create Sieve for Semi Prime Numbers
    vector<int> createSemiPrimeSieve(int n)
    {
        int v[n + 1];

        for (int i = 1; i <= n; i++)
            v[i] = i;

        int countDivision[n + 1];

        for (int i = 0; i < n + 1; i++)
            countDivision[i] = 2;

        for (int i = 2; i <= n; i++) {
            if (v[i] == i && countDivision[i] == 2) {
                for (int j = 2 * i; j <= n; j += i) {
                    if (countDivision[j] > 0) {
                        v[j] = v[j] / i;
                        countDivision[j]--;
                    }
                }
            }
        }

        vector<int> res;

        for (int i = 2; i <= n; i++) {
            if (v[i] == 1 && countDivision[i] == 0)
                res.push_back(i);
        }

        return res;
    }

};