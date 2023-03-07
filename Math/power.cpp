///these two functions uses with each other
    ll mul_mod(ll a, ll b, ll M){
        ll res = 0;
        a = a % M;
        while (b > 0){
            if (b % 2 == 1)
                res = (res + a) % M;

            a = (a * 2) % M;
            b /= 2;
        }
        return res % M;
    }
    ll pwr(ll x, ll y, ll n){
        if(y==0)
            return 1;
        else if(y%2==0){
            return pwr(mul_mod(x,x,n), y/2, n);
        }
        else {
            ll res = pwr(mul_mod(x,x,n), (y-1)/2, n);
            return (mul_mod(x, res, n)) %n;
        }
    }

    ll pwr(ll x, ll y){
        if(y == 0)
            return 1;
        else if(y % 2 == 0){
            return pwr(x * x, y / 2);
        }
        else {
            return x * pwr(x * x, (y - 1) / 2);
        }
    }

    ll pwr(ll x, ll y, ll M){
        if(y==0)
            return 1;
        else if(y%2==0){
            return pwr(x * x % M, y/2, M);
        }
        else {
            return (x * pwr(x * x % M, (y-1)/2, M)) % M;
        }
    }

    ll modInv(ll n, ll M){
        return pwr(n, M-2, M);
    }

   