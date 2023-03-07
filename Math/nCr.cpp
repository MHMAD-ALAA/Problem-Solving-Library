ll nCr(int n, int r){
    ll ans = 1;
    ll rFact = 2;
    for(int i=n-r+1; i<=n; i++){
        ans *= i;
        if(ans % rFact == 0 && rFact <= r){
            ans /= rFact;
            rFact++;
        }
    }
    return ans;
}

//**********************************************************

ll modInv(ll n, ll M){
    return pwr(n, M-2, M);
}

ll nCr_Fact(int n, int r){
    return ( Fact[n] * modInv(Fact[r], mod) % mod * modInv(Fact[n-r], mod) ) % mod;
}

ll ncr_table[1001][1001];
const int siz = 1e6+5;
void nCr_Table(){
    for(int i=0; i<=1000; i++){
        ncr_table[i][0] = 1;
    }
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            ncr_table[i][j] = (ncr_table[i-1][j-1] + ncr_table[i-1][j]) % mod;
        }
    }
}

// *************************************************************

ll nCr(int n, int r){
    double ans = 1;
    for(int i=1; i<=r; i++){
        //res = res % mod * (n - r + i) % mod * modInv(i);
        res = (res * (n - r + i)) / i;
    }
    return (res + 0.01);
    // (res + 0.01) % mod;
}

ll nnCrr(ll n, ll r)
{
    ld res = 1;
    for(ll i=n; i>r; i--)
    {
        res*=i;
        res/=(n-i+1);
    }
    return res;
}

ll nCr(int n, int r){
    ull ans = 1;
    if(r <(n-r)){
        r=n-r;
    }

    for(int i = n, j = 1; i > r; i--){
        ans *= i;
        while((ans%j)==0 && (j<=n-r)){
            ans /= j;
            j++;
        }
    }

    return ans;
}




    ll pas[1005][1005];
    void pascal(){
        for(int i=0; i<1000; i++){
            pas[i][0] = 1, pas[i][i] = 1;
            for(int j=1; j<i; j++){
                pas[i][j] = (pas[i-1][j] + pas[i-1][j-1]) % mod;
            }
        }
    }