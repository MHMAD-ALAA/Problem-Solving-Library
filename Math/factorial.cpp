int factorial(int n) {  // O(n)
    if(n == 0) return 1;

    return n * factorial(n - 1);
}


// factorial table
const ll N = 1e6+1;
vector<ll> Fact(N,1);
void Fact_table(){
    for (int i = 1; i < N; ++i) {
        Fact[i] = Fact[i-1] * i % mod;
    }
}


ll fact(ll n){
    ll ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans = (ans * i % mod) % mod;
    }
    return ans;
}
