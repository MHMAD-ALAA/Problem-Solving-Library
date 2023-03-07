 ll nPr(int n, int r){
        if(n < r){
            return 0;
        }
        ll ans = 1;
        for(int i=n-r+1; i<=n; i++){
            ans *= i;
        }
        return ans;
    }


    ll cPer(int n, int r){ //circular permutation
        ll ans = 1;
        for(int i=n-r+1; i<=n; i++){
            ans *= i;
            if(ans % r == 0){
                ans /= r; //to avoid overflow
                r=1;
            }
        }
        return ans;
    }